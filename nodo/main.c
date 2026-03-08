#include <stdio.h>
#include "nodo.h"

int WinMain()
{
 printf("Prueba del TAF Nodo\n");

 Nodo* nodo1 = CrearNodo(10);
        if (nodo1 ==NULL){
                return -1;
        }

    
 printf("Valor del nodo: %d\n", obtenerValor(nodo1));
 asignarValor(nodo1, 25);
 printf("Nuevo valor del nodo: %d\n", obtenerValor(nodo1));
 destruirNodo(nodo1);
    return 0;
}
