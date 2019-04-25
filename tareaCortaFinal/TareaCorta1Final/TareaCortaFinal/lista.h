#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>
using namespace std;

class lista
{
private:

    int cantidad=0;

public:
    nodo* Head = nullptr;
    lista();
    void insertarFinal(nodo* nuevoNodo);
    void insertarInicio(nodo* nuevoNodo);
    void display();
    nodo* getHead();
    void eliminar(nodo* actual);
    int getCantidad();

};
#endif // LISTA_H
