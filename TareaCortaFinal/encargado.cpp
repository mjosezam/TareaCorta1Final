#include "encargado.h"

encargado::encargado(encargado* e1,encargado* e2,encargado* e3,encargado* e4,encargado* e5,encargado* e6){
    this->e1=e1;
    this->e2=e2;
    this->e3=e3;
    this->e4=e4;
    this->e5=e5;
    this->e6=e6;
}

Vehiculo* encargado::proceso(nodo* carro){
    int i;
    for (i=0;i<6;i++){
        if (carro->getVehiculo()->procesos[i][2]==0){
            if (carro->getVehiculo()->procesos[i][0]=='A'){
                e1->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='B'){
                e2->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='C'){
                e3->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='D'){
                e4->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='E'){
                e5->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='F'){
                e6->ingresar(carro);
                break;
                }
            }
    }
    if (i==6){
        return carro->getVehiculo();
    }
}

nodo* encargado::Cola(){
    cout<<"cola"<<endl;
    nodo* mayor=this->vehiculosProcesos->getHead();
    nodo* temp=this->vehiculosProcesos->getHead();
    for (int i=0;i<3 && temp->getVehiculo()==0 ;i++) {
        if(mayor->getVehiculo()->getTiempo()<temp->getVehiculo()->getTiempo()){
            mayor= temp;
            temp= temp->getSiguiente();
        }else{
            temp=temp->getSiguiente();
        }
    }
    this->carroProceso-=1;
    this->vehiculosProcesos->eliminar(mayor);
    return mayor;
}


void encargado::funcion(){
    nodo* temp=vehiculosProcesos->getHead();
    if(vehiculosProcesos->getHead()==0) {
        cout << "La agenda está vacia" << endl;
        return;
    }
    else{
        if(temp==0){
            return;
        }
        int i=0;
        while(temp!=0 && temp->getVehiculo()->procesos[i][1]!='0'){
            cout << "Ejecutando proceso " << temp->getVehiculo()->procesos[i][0]<< endl;
            i++;
            restar(temp->getVehiculo());
            temp=temp->getSiguiente();
            if(temp==0){
                return;
            }
        }
        if(temp->getVehiculo()->procesos[i][1]=='0'){
            proceso(temp);
            vehiculosProcesos->eliminar(temp);
        }
    }
}

void encargado::restar(Vehiculo* carro){
    for (int i=0;i<6;i++){
        if(carro->procesos[i][2]==0){
            carro->procesos[i][1]-=1;
            break;
        }
    }
}
nodo* encargado::ingresar(nodo* carroNuevo){
    vehiculosProcesos->insertarInicio(carroNuevo);
    cout<<"Inserción de Vehiculo en proceso "<< vehiculosProcesos->Head->getVehiculo()->procesos[0][0]<< " en la agenda correspondiente" << endl;
    return Cola();
}
