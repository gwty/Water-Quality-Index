/*
Author: Gowtham Ashok
E-mail: gwty93@gmail.com
Program: Water Quality Index Calculator
Note:
Runs in 1600x900, resolutions lesser than 1600x900 are badly supported
to compile
mkdir build
cd build
qmake ..
make
*/

#include <QtGui/QApplication>
#include "MainWindow.h"
#include<qcustomplot.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
