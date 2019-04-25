#include "lista.h"

lista::lista()
{}

void lista::insertarFinal(nodo* nuevonodo){
    nodo *actual=Head;
    if(Head !=nullptr){
        while(actual->getSiguiente()!=nullptr){
            actual=actual->getSiguiente();
        }
        actual->setSiguiente(nuevonodo);
        this->cantidad+=1;
    }

    else{
        Head = nuevonodo;
        Head->setSiguiente(nullptr);
        this->cantidad+=1;
    }
}

void lista::insertarInicio(nodo* nuevonodo){
    cout<< "1      " <<nuevonodo->getVehiculo()<<endl;
    nuevonodo->setSiguiente(Head);
    Head = nuevonodo;
    cout<< "2      " << Head<<endl;
    this->cantidad+=1;
}

void lista::display(){
    nodo *actual = Head;
    if(actual==nullptr){
        cout<<"empty"<<endl;
    }

    else{
        while(actual->getSiguiente()!=nullptr){
            cout<<actual<<endl;
            actual=actual->getSiguiente();
        }
    }
}
nodo* lista::getHead(){
    return this->Head;
}

void lista::eliminar(nodo* actual){
    nodo* temp= Head;
    nodo* anterior=Head;
    if(Head==nullptr){

    }else{
        while(temp!=nullptr){
            if(temp==actual && temp->getSiguiente()==nullptr){
                anterior->setSiguiente(nullptr);
                delete(temp);
                this->cantidad+=1;
                break;
            }
            else if(temp==actual && temp==anterior){
                this->Head=temp->getSiguiente();
                delete(temp);
                this->cantidad+=1;
                break;
            }
            else if (temp== actual) {
                anterior->setSiguiente(temp->getSiguiente());
                delete(temp);
                this->cantidad+=1;
                break;
            }
            else {
                temp=temp->getSiguiente();
            }
        }
    }
}
int lista::getCantidad(){
    return this->cantidad;
}
