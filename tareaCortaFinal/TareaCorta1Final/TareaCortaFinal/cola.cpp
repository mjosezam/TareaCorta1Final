#include "cola.h"

cola::cola()
{}
///
/// \brief cola::solicitar
/// \return carro
/// saca el primero que entro
///
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
///
/// \brief cola::agregar
/// \param actual
///agrega a la cola
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
///
/// \brief cola::recorrer
///recorre la cola para ver los nodos
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

