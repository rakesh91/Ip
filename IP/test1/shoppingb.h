#ifndef SHOPPINGB_H
#define SHOPPINGB_H

#include <QWidget>
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

class shoppingb : public QWidget,public expend,public dab
{
    Q_OBJECT


    public:

        explicit shoppingb(QWidget *parent = 0);
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

#endif // SHOPPINGB_H
