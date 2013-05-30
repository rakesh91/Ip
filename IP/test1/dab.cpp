#include "dab.h"

dab::dab()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
         db.setHostName("mysql.alwaysdata.com");//wat ever doesnt matter
         db.setDatabaseName("food");//wat ever doesnt matter
         db.setUserName("food");//wat ever doesnt matter
         db.setPassword("pesit123456789");
         bool ok= db.open();
         qDebug()<<ok<<"-----------";
    qDebug()<<"here";
}
bool dab::createConnection()
{

 QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     db.setDatabaseName(":memory:");
     if (!db.open()) {
         QMessageBox::critical(0, qApp->tr("Cannot open database"),
             qApp->tr("Unable to establish a database connection.\n"
                      "This example needs SQLite support. Please read "
                      "the Qt SQL driver documentation for information how "
                      "to build it.\n\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);
         qDebug()<<"hi i came";
         return false;
     }
}
