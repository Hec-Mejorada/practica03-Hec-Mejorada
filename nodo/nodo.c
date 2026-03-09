#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

/* Definir la estructura Nodo. Debe contener un entero llamado valor. */
struct Nodo
{
    int valor;
};


/* Crear un nodo dinámicamente */
Nodo* crearNodo(int valor)
{
    // 1. Reservar memoria con malloc
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    
    // 2. Verificar que la memoria se haya asignado
    if (nuevoNodo == NULL) {
        printf("Error: No se pudo asignar memoria para el nodo\n");
        return NULL;
    }
    
    // 3. Inicializar el valor del nodo
    nuevoNodo->valor = valor;
    
    // 4. Regresar el nodo
    return nuevoNodo;
}


/* Obtener el valor almacenado */
int obtenerValor(Nodo* nodo)
{
    // 1. Verificar que el nodo no sea NULL
    if (nodo == NULL) {
        printf("Error: El nodo es NULL\n");
        return 0; // Valor por defecto en caso de error
    }
    
    // 2. Regresar el valor almacenado
    return nodo->valor;
}


/* Modificar el valor almacenado */
void asignarValor(Nodo* nodo, int valor)
{
    // 1. Verificar que el nodo no sea NULL
    if (nodo == NULL) {
        printf("Error: El nodo es NULL\n");
        return;
    }
    
    // 2. Asignar el nuevo valor
    nodo->valor = valor;
}


/* Liberar memoria del nodo */
void destruirNodo(Nodo* nodo)
{
    // Liberar la memoria usando free
    free(nodo);
}
