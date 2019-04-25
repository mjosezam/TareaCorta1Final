#include "nodo.h"

nodo::nodo(){}

nodo* nodo::getSiguiente(){
    return this->siguiente;
}
void nodo::setSiguiente(nodo* Siguiente){
    this->siguiente= Siguiente;
}
nodo* nodo::getAnterior(){
    return this->anterior;
}

void nodo::setAnterior(nodo* Anterior){
    this->anterior=Anterior;
}
Vehiculo* nodo::getVehiculo(){
    return this->vehiculo;
}
void nodo::setVehiculo(Vehiculo* carro){
    this->vehiculo= carro;
}



