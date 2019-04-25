#include "cola.h"

cola::cola()
{}

Vehiculo* cola::solicitar(){
    cout<<Inicial<<endl;
    if(Inicial==0){
        //return NULL;
        cout<<"aACTUAL ==NULLPTR"<<endl;
    }
    else{
        nodo* actual = this->Inicial;
        cout<<"antes de cant"<<endl;
        this->cantidad-=1;
        if(actual->getSiguiente()!=nullptr){
            Vehiculo* carro= actual->getVehiculo();
            actual= actual->getSiguiente();
            free(Inicial);
            Inicial=actual;
            return carro;
        }
        else {

            cout<<"aiofhIOO"<<endl;
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
    cout << "AGREGAR DE COLA" << endl;
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
        std::cout<<"Queue is empty"<<endl;
    }while(temp!=nullptr){
        std::cout<<temp<<endl;
        temp= temp->getSiguiente();
    }
}
int cola::getCantidad(){
    return this->cantidad;
}

