#ifndef OTHERB_H
#define OTHERB_H

#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include <QtSql>
#include <QtCore>
#include<QLineEdit>
#include <QPushButton>
#include <QTableView>
#include "expend.h"
#include "dab.h"
#include<QSqlQueryModel>
#include<QDateTime>
#include<QMessageBox>

class otherb : public QWidget,public expend,public dab
{

Q_OBJECT


public:

    explicit otherb(QWidget *parent = 0);
static bool createConnection();

    QLabel *enter;

    QLabel *pla;
    QLineEdit *input1;
    QLineEdit *place;
  QVBoxLayout *hb;
   QHBoxLayout *hb1;

    QPushButton *submit;
      QPushButton *back;

    QDateTime *qdt;

private:


public slots:

void submitt();
void menuscr();

};

#endif // OTHERB_H
