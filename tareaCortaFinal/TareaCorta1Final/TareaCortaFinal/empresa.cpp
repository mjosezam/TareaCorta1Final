#include "empresa.h"
#include <time.h>
#include <unistd.h>

empresa::empresa()
{}
///
/// \brief empresa::proceso
/// \param carro
/// \return vehiculo
/// pasa el carro al proceso que debe
///
Vehiculo* empresa::proceso(nodo* carro){
    int i;
    for (i=0;i<6;i++){
        if (carro->getVehiculo()->procesos[i][2]=='0'){
            if(carro->getVehiculo()->procesos[i][0]=='A'){
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
///
/// \brief empresa::cycle
///maneja los diferentes encargados y les llama la funcion
void empresa::cycle(){
    for (int i=0;i<1000;i++){
        if (i%5==0 && i!=0 && colaGeneral->getCantidad()>2){
            Vehiculo* espera = colaGeneral->solicitar();
            nodo* carro= new nodo();
            cout<<"CARRO EN CYCLE     " << carro<<endl;
            carro->setVehiculo(espera);
            proceso(carro);
            }
        else if(carroNuevo){
            usleep(60000);
        }
        else{
            e1->funcion();
            e2->funcion();
            e3->funcion();
            e4->funcion();
            e5->funcion();
            e6->funcion();
        }
        usleep(60000);
    }
    return;
}
///
/// \brief empresa::nuevo
///crea nuevos carro cada cierto tiempo
void empresa::nuevo(){
    for(int i=0;i<30;i++){
        cout << "WERTYU" <<endl;
        this->carroNuevo=true;
        Vehiculo* carro= new Vehiculo();
        int linea= rand()%7;
        carro->vehiculoProceso(linea);
        nodo* nuevoNodo= new nodo();
        nuevoNodo->setVehiculo(carro);
        proceso(nuevoNodo);
        this->carroNuevo=false;
        usleep(600000);
    }
}


