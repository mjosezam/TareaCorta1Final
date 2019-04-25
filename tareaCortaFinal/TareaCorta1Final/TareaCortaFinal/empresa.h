#ifndef EMPRESA_H
#define EMPRESA_H
#include "vehiculo.h"
#include "nodo.h"
#include "cola.h"
#include "encargado.h"

class empresa
{
private:
    cola* colaGeneral = new cola();
    bool carroNuevo=false;
    encargado* e1= new encargado(nullptr,e2,e3,e4,e5,e6);
    encargado* e2=new encargado(e1,nullptr,e3,e4,e5,e6);
    encargado* e3=new encargado(e1,e2,nullptr,e4,e5,e6);
    encargado* e4=new encargado(e1,e2,e3,nullptr,e5,e6);
    encargado* e5=new encargado(e1,e2,e3,e4,nullptr,e6);
    encargado* e6=new encargado(e1,e2,e3,e4,e5,nullptr);

public:
    empresa();
    Vehiculo* proceso(nodo* carro);
    void produccion();
    void cycle();
    void nuevo();

};

#endif // EMPRESA_H
