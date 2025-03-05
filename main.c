
#include <stdio.h>
#include "nodo.h"
// Asegúrate de que el nombre y la ruta de 'nodo.h' sean correctos

int main() {
    // Crear dos nodos
    Nodo* n1 = crear_nodo();
    Nodo* n2 = crear_nodo();

    // Asignar datos a los nodos
    asignar_dato(n1, 10);
    asignar_dato(n2, 20);

    // Conectar los nodos
    asignar_referencia(n1, n2);

    // Mostrar los datos
    printf("Dato de n1: %d\n", obtener_dato(n1));
    printf("Dato de n2: %d\n", obtener_dato(obtener_referencia(n1)));

    // Liberar memoria
    borrar_nodo(n1);
    borrar_nodo(n2);

    return 0;
}
