#include <QCoreApplication>
#include<QtSql>
#include<QtDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString serverName = "LOCALHOST\\SQLEXPRESS"; // ime na server
    QString dbName = "test"; // ime na databaza

    QSqlDatabase db =  QSqlDatabase::addDatabase("QODBC"); // root databaza

    db.setConnectOptions();
    QString dsn = QString("DRIVER = {SQL Native Client};SERVER=%1;DATABASE=%2;Trusted_Connection=Yes;").arg(serverName).arg(dbName);// connection string

    db.setDatabaseName(dsn);

    if(db.open()){
        qDebug()<<"Opened!";
        QSqlQuery qry;
        if(qry.exec("SELECT * FROM [test].[dbo].[People]")){ // pristapuvame do dtabazata
            while(qry.next()){
                qDebug()<<qry.value(1).toString(); // pecatenje na iminja
            }
        }
        else{
            qDebug()<<"Error = "<<db.lastError().text();
        }

        qDebug()<<"Closing...";
        db.close();
    }
    else{
        qDebug()<<"Error = "<<db.lastError().text();
    }
    return a.exec();
}
