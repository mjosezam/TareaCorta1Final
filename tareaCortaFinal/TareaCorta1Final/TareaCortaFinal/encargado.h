#ifndef ENCARGADO_H
#define ENCARGADO_H
#include "vehiculo.h"
#include "nodo.h"
#include "lista.h"
#include "cola.h"


class encargado
{

private:
    lista* vehiculosProcesos= new lista();
    int carroProceso=0;
    encargado* e1;
    encargado* e2;
    encargado* e3;
    encargado* e4;
    encargado* e5;
    encargado* e6;
public:
    encargado(encargado* e1,encargado* e2,encargado* e3,encargado* e4,encargado* e5, encargado* e6);
    Vehiculo* proceso(nodo* carros);
    void restar(Vehiculo* carro);
    nodo* Cola();
    void funcion();
    nodo* ingresar(nodo* carroNuevo);
};

#endif // ENCARGADO_H
