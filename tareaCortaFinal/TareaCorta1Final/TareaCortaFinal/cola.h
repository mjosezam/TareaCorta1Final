#ifndef COLA_H
#define COLA_H
#include "nodo.h"
#include "vehiculo.h"
#include <iostream>
using namespace std;

class cola
{
private:
    nodo* Inicial=nullptr;
    nodo* Ultimo= nullptr;
    int cantidad=0;

public:
    cola();
    Vehiculo* solicitar();
    void agregar(nodo* actual);
    void recorrer();
    int getCantidad();
};

#endif // COLA_H
