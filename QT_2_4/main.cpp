#include "gui_prob.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GUI_PROB w;
    w.show();
    return a.exec();
}
