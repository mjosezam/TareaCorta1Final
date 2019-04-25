#include "empresa.h"
#include <time.h>
#include <unistd.h>

empresa::empresa()
{}

Vehiculo* empresa::proceso(nodo* carro){
    int i;
    for (i=0;i<6;i++){
        if (carro->getVehiculo()->procesos[i][2]=='0'){
            if(carro->getVehiculo()->procesos[i][0]=='A'){
                cout << "Se envía el vehiculo al encargado de proceso A" << endl;
                e1->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='B'){
                cout << "Se envía el vehiculo al encargado de proceso B" << endl;
                e2->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='C'){
                cout << "Se envía el vehiculo al encargado de proceso C" << endl;
                e3->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='D'){
                cout << "Se envía el vehiculo al encargado de proceso D" << endl;
                e4->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='E'){
                cout << "Se envía el vehiculo al encargado de proceso E" << endl;
                e5->ingresar(carro);
                break;
                }
            else if (carro->getVehiculo()->procesos[i][0]=='F'){
                cout << "Se envía el vehiculo al encargado de proceso F" << endl;
                e6->ingresar(carro);
                break;
                }
            }
    }
    if (i==6){
        cout << "Todos los procesos de este vehiculo han sido completados" << endl;
        return carro->getVehiculo();
    }
}

void empresa::cycle(){
    for (int i=0;i<1000;i++){
        if (i%5==0 && i!=0 && colaGeneral->getCantidad()>2){
            cout << "5 segundos han pasado, pop de la cola general" << endl;
            Vehiculo* espera = colaGeneral->solicitar();
            nodo* carro= new nodo();
            carro->setVehiculo(espera);
            proceso(carro);
            }
        else if(carroNuevo){
            usleep(600000);
        }
        else{
            e1->funcion();
            e2->funcion();
            e3->funcion();
            e4->funcion();
            e5->funcion();
            e6->funcion();
        }
        usleep(600000);
    }
    return;
}

void empresa::nuevo(){
    for(int i=0;i<30;i++){
        cout << "Un carro nuevo se esta fabricando" << endl;
        this->carroNuevo=true;
        Vehiculo* carro= new Vehiculo();
        int linea= rand()%7;
        carro->vehiculoProceso(linea);
        nodo* nuevoNodo= new nodo();
        nuevoNodo->setVehiculo(carro);
        proceso(nuevoNodo);
        this->carroNuevo=false;
        usleep(60000000);
    }
}


