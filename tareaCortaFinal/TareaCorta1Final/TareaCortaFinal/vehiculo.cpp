#include "vehiculo.h"

Vehiculo::Vehiculo(){}
///
/// \brief Vehiculo::vehiculoProceso
/// \param tipo
/// asigna los procesos por tipo de dato
///
void Vehiculo::vehiculoProceso(int tipo){
    this->linea=tipo;
    if(tipo==1){
        this->procesos[0]="A40";
        this->procesos[1]="B40";
        this->procesos[2]="C80";
        this->procesos[3]="D30";
        this->procesos[4]="E60";
        this->procesos[5]="F50";
    }
    else if (tipo==2) {
        this->procesos[0]="C40";
        this->procesos[1]="A30";
        this->procesos[2]="B30";
        this->procesos[3]="E40";
        this->procesos[4]="D60";
        this->procesos[5]="F30";
    }
    else if (tipo==3) {
        this->procesos[0]="D30";
        this->procesos[1]="E80";
        this->procesos[2]="A60";
        this->procesos[3]="C40";
        this->procesos[4]="B30";
        this->procesos[5]="F30";
    }
    else if (tipo==4) {
        this->procesos[0]="B40";
        this->procesos[1]="C30";
        this->procesos[2]="D80";
        this->procesos[3]="A60";
        this->procesos[4]="F40";
        this->procesos[5]="E30";
    }
    else if (tipo==5) {
        this->procesos[0]="E80";
        this->procesos[1]="F30";
        this->procesos[2]="B40";
        this->procesos[3]="C80";
        this->procesos[4]="A30";
        this->procesos[5]="D60";
    }
    else if (tipo==6) {
        this->procesos[0]="F30";
        this->procesos[1]="D30";
        this->procesos[2]="C40";
        this->procesos[3]="B80";
        this->procesos[4]="E60";
        this->procesos[5]="A80";
    }
}

void Vehiculo::setTiempo(int tiempo){
    this->tiempo=tiempo;
}
int Vehiculo::getTiempo(){
    return this->tiempo;
}
void Vehiculo::setLinea(int linea){
    this->linea=linea;
}
int Vehiculo::getLinea(){
    return this->linea;
}
