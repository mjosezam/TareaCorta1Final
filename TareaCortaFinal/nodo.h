#ifndef NODO_H
#define NODO_H
#include "vehiculo.h"


class nodo
{
private:
    nodo* siguiente;
    nodo* anterior;
    Vehiculo* vehiculo;
public:
    nodo();
    nodo* getSiguiente();
    void setSiguiente(nodo* Siguiente);
    nodo* getAnterior();
    void setAnterior(nodo* Anterior);
    Vehiculo* getVehiculo();
    void setVehiculo(Vehiculo* carro);
};

#endif // NODO_H
