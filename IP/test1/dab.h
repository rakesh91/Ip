#ifndef DAB_H
#define DAB_H
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include<QSqlQueryModel>

class dab
{
public:
    dab();
    static bool createConnection();
};

#endif // DAB_H
