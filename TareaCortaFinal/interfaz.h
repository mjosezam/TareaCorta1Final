#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "mainwindow.h"
#include <unistd.h>
#include <iostream>
#include <string>
#include "vehiculo.h"
#include "empresa.h"
#include <QApplication>
#include <QRect>
#include <QLabel>
#include <QString>
#include <QDebug>
#include <thread>
#include <QListWidget>

class interfaz
{
private:
    MainWindow* w;
    QLabel** ArrayL;
    QRect** Rect;
    QLabel* LabelSec;
    QListWidget* List;
    QString process;
public:
    interfaz(MainWindow *w, QLabel **ArrayL, QRect **Rect);
    void rect();
    void update();
};

#endif // INTERFAZ_H
