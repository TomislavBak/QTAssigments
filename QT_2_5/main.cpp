#include "mainwindow.h"
#include<QLabel>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    QLabel *label = new QLabel("<b>Hello<b> world");
    label->show();


    return a.exec();
}
