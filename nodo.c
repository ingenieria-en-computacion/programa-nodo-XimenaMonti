#include "nodo.h"

Nodo* crear_nodo() {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return NULL;
    }
    nuevo->dato = 0;
    nuevo->sig = NULL;
    return nuevo;
}

bool borrar_nodo(Nodo *n) {
    if (n != NULL && n->sig == NULL) {
        free(n);
        return true;
    }
    return false;
}

Nodo* asignar_dato(Nodo* n, DATO d) {
    if (n != NULL) {
        n->dato = d;
    }
    return n;
}

DATO obtener_dato(Nodo* n) {
    if (n == NULL) {
        printf("No hay datos.\n");
        return -1;
    }
    return n->dato;
}

Nodo* asignar_referencia(Nodo* n, Nodo* e) {
    if (n != NULL) {
        n->sig = e;
    }
    return n;
}

Nodo* obtener_referencia(Nodo* n) {
    if (n != NULL) {
        return n->sig;
    }
    return NULL;
}