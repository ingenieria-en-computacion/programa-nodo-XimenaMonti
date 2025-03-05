
#include <stdio.h>
#include "nodo.h"

int main() {
    // Crear dos nodos
    Nodo* n1 = crear_nodo();
    Nodo* n2 = crear_nodo();

    // Asignando datos a los nodos
    asignar_dato(n1, 10);
    asignar_dato(n2, 20);

    asignar_referencia(n1, n2);

    // Para imprimir los datos de los nodos
    printf("Dato de n1: %d\n", obtener_dato(n1));
    printf("Dato de n2: %d\n", obtener_dato(obtener_referencia(n1)));

    // Liberar memoria
    free(n1);
    free(n2);

    return 0;
}
