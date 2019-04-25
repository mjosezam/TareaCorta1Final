#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
using namespace std;


class Vehiculo
{
private:
    int tiempo=0;
    int linea;
public:
    string procesos[6]={};
    Vehiculo();
    void vehiculoProceso(int tipo);
    void setTiempo(int tiempo);
    int getTiempo();
    void setLinea(int linea);
    int getLinea();
};

#endif // VEHICULO_H
