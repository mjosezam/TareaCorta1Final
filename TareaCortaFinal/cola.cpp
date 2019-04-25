#include "cola.h"

cola::cola()
{}

Vehiculo* cola::solicitar(){
    if(Inicial==0){}
    else{
        nodo* actual = this->Inicial;
        this->cantidad-=1;
        if(actual->getSiguiente()!=nullptr){
            Vehiculo* carro= actual->getVehiculo();
            actual= actual->getSiguiente();
            free(Inicial);
            Inicial=actual;
            return carro;
        }
        else {
            Vehiculo* carro= actual->getVehiculo();
            free(Inicial);
            Inicial= nullptr;
            Ultimo=nullptr;
            return carro;
        }
    }
}
void cola::agregar(nodo* actual){
    this->cantidad+=1;
    cout << "Agregar a cola general" << actual << endl;
    if(Ultimo==nullptr){
        Ultimo->setSiguiente(actual);
        Inicial=Ultimo;
    }
    else{
        Ultimo->setSiguiente(actual);
        actual->setSiguiente(nullptr);
        Ultimo= actual;
    }
}
void cola::recorrer(){
    nodo* temp= Inicial;
    if(Inicial==nullptr && Ultimo==nullptr){
        std::cout<<"Cola vacia"<<endl;
    }while(temp!=nullptr){
        std::cout<<temp<<endl;
        temp= temp->getSiguiente();
    }
}
int cola::getCantidad(){
    return this->cantidad;
}

