#ifndef FOODT_H
#define FOODT_H
#include<QHeaderView>
#include "foodb.h"
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

class foodt : public QWidget,public expend
{

Q_OBJECT


public:

    explicit foodt(QWidget *parent = 0);

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

private:foodb *fb;


    public slots:
    void addclick();
    void menu1();
   // void submitt();
    void remove();
};

#endif // FOODT_H
