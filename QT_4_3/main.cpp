#include <QCoreApplication>
#include<QtSql>
#include<QtDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC"); // (skoro)univerzalen driver
    db.setHostName("LOCALHOST\\SQLEXPRESS");
    db.setDatabaseName("mydsn32");

    // C:\Windows\SysWoW64\Odbcad32.exe (driver oti Qt e 32bit windows 64bit)


    if(db.open()){
        qDebug()<<"Opened";

        db.close();
    }

    else{
        qDebug()<<db.lastError().text();

    }
    return a.exec();
}
