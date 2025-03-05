#ifndef NODO_H
#define NODO_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int DATO;

typedef struct Nodo {
    DATO dato;
    struct Nodo *sig;
} Nodo;

// Funciones para manipular nodos
Nodo* crear_nodo();
bool borrar_nodo(Nodo *n);
Nodo* asignar_dato(Nodo* n, DATO d);
DATO obtener_dato(Nodo* n);
Nodo* asignar_referencia(Nodo* n, Nodo* e);
Nodo* obtener_referencia(Nodo* n);

#endif // NODO_H
