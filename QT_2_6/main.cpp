#include "mainwindow.h"

#include <QApplication>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("My App");

    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);

    w.setLayout(hlayout);

    w.show();
    return a.exec();
}
