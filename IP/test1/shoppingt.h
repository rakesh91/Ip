#ifndef SHOPPINGT_H
#define SHOPPINGT_H

#include <QWidget>
#include<QHeaderView>
#include "shoppingb.h"
#include<QLineEdit>
#include<QDateTime>
#include<QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QPushButton>
#include<QVBoxLayout>
#include <QLabel>
#include "expend.h"
#include<QSqlQuery>
#include<QHBoxLayout>

class shoppingt : public QWidget,public expend
{
    Q_OBJECT


    public:

        explicit shoppingt(QWidget *parent = 0);

        QHBoxLayout *hb3;
        QHBoxLayout *hb;
        QHBoxLayout *hb1;
        QLabel *saved1;
        QLabel *val;
         QVBoxLayout *vb;
         QPushButton *add;
          QPushButton *del;
QPushButton *bac;
          QSqlQueryModel *model;
          QTableView *view;

    shoppingb *sb;


        public slots:
    void menu1();
        void addclick();
       // void submitt();
        void remove();
    };

#endif // SHOPPINGT_H
