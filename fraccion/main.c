#include <stdio.h>
#include "fraccion.h"


int main()
{
    printf("Prueba del TAD Fraccion\n");

    /* 1. Crear dos fracciones: 1/2 y 3/4 */
    Fraccion* f1 = fraccion_crear(1, 2);
    Fraccion* f2 = fraccion_crear(3, 4);

    printf("Fraccion 1: ");
    fraccion_imprimir(f1);    /* imprime 1/2 */

    printf("Fraccion 2: ");
    fraccion_imprimir(f2);    /* imprime 3/4 */

    printf("\nSuma de fracciones:\n");

    /* 2. Sumar fracciones */
    Fraccion* resultado = fraccion_sumar(f1, f2);

    /* 3. Imprimir resultado */
    printf("%d/%d + %d/%d = ",
           f1->numerador, f1->denominador,
           f2->numerador, f2->denominador);
    fraccion_imprimir(resultado);    /* imprime 5/4 */

    /* 4. Liberar memoria */
    fraccion_liberar(f1);
    fraccion_liberar(f2);
    fraccion_liberar(resultado);

    return 0;
}
