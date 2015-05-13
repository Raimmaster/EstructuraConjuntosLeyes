#include "Conjunto.h"

Conjunto::Conjunto()
{
    this->inicio = NULL;
    this->actual = NULL;
}

bool Conjunto::insertar(NLegisladores *n){
    actual = inicio;

    if(!actual){//Si está vacío
        inicio = n;
        actual = n;
        return true;
    }


    if(actual->id == n->id)
        return false;

    while(actual->siguiente){
        if(actual->siguiente->id == n->id)
            return false;
        else if (actual->siguiente->id <= n->id)
            break;

        actual = actual->siguiente;
    }

    n->siguiente = actual->siguiente;
    actual->siguiente = n;
    if(inicio->id > n->id)
        inicio = n;

    return true;
}

NLegisladores* Conjunto::buscar(int id){
    while(actual){
        if(actual->id == id)
            return actual;

        actual = actual->siguiente;
    }

    return NULL;
}

bool Conjunto::suprimir(int id){
    actual = inicio;
    if (!actual)
        return false;

    if(actual->id == id){
        inicio = actual->siguiente;
        delete actual;

        return true;
    }

    while(actual->siguiente){
        if(actual->siguiente->id == id){
            actual->siguiente = actual->siguiente->siguiente;
            delete actual;
            return true;
        }
        actual = actual->siguiente;
    }

    return false;
}

bool Conjunto::isMiembro(int id){
    if(buscar(id))
        return true;

    return false;
}
