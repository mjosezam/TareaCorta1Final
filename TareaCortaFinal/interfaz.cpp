#include "interfaz.h"


interfaz::interfaz(MainWindow *w, QLabel **ArrayL, QRect **Rect)
{
    this->w=w;
    this->ArrayL=ArrayL;
    this->Rect=Rect;
}


void interfaz::rect(){

    QRect* B;
    QLabel* label;
    QLabel* tmp;
    int x;

    QLabel* Labeltmp=new QLabel(w);
    Labeltmp->setText("Waiting...");
    Labeltmp->setGeometry(450,0,100,100);

    this->LabelSec=new QLabel(w);
    this->LabelSec->setGeometry(250,20,120,20);

    //Waiting.... list, cola
    this->List=new QListWidget(w);
    this->List->setGeometry(385,70,200,250);

    for (int i=0;i<6;i++){
        x=40*i+20;

        tmp=new QLabel(w);
        tmp->setGeometry(20,x+22,200,20);
        tmp->setText("Vehículo  "+QString::number(i+1));
        usleep(60000);


        label=new QLabel(w);
        label->setGeometry(290,x+44,100,20);
        label->setText(QString::number(i+1));
        usleep(60000);

        B=new QRect(20,x+44,100,20);
        usleep(60000);

        ArrayL[i]=label;
        Rect[i]=B;


    }
    usleep(1000000);
}

/**void interfaz::update(){
    int porciento;
    char proceso;
    for (int i=0;i<6;i++){
        empresa->Produccion(*vehiculos[i],i+1);
        porciento = vehiculos[i]->getTiempo();
        cout << porciento << endl;
        proceso = vehiculos[i]->getProcesoActual();
        Rect[i]->setValue(porciento);
        ArrayL[i]->setText(QChar(vehiculos[i]->getProcesoActual()));
        process = ArrayL[i]->text();
        usleep(10000);
    }
}**/



