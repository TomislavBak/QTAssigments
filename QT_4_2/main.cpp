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

    if(db.open()){ // otvaranje na konekcija
        qDebug()<<"Opened!";

        QString sQuery = "INSERT INTO [test].[dbo].[People] ([FirstName],[LastName]) VALUES(:first,:last)";
        QSqlQuery qry;

        qry.prepare(sQuery); // ja podgotvuvame nizata
        qry.bindValue(":first","Heather"); // dodavame vrednosti
        qry.bindValue(":last","Cairns");

        if(qry.exec()){ // dokolku se dodadat informaciite
            qDebug()<<"Record Inserted";
        }

        qDebug()<<"Closing...";
        db.close();
    }
    else{
        qDebug()<<"Error = "<<db.lastError().text();
    }
    return a.exec();
}
