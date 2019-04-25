#include "mainwindow.h"
#include <QApplication>
#include <thread>
#include <string>
#include <QDebug>
#include <QRect>
#include <QLabel>
#include "empresa.h"
#include "interfaz.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Fábrica de autos");
    w.setGeometry(500,200,600,400);
    QLabel* ArrayL[7]={};
    QRect* Rect[7]={};
    //interfaz* I =new interfaz(&w,ArrayL,Rect);
    //I->rect();
    empresa* E = new empresa();
    thread th1(&empresa::nuevo,E);
    thread th2(&empresa::cycle,E);

    w.show();

    return a.exec();
}
