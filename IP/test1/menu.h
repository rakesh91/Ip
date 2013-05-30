#ifndef MENU_H
#define MENU_H


#include "foodt.h"
#include "dab.h"
#include<QtSql>
#include<QSqlDatabase>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QLabel>
#include<QListWidget>
#include<QWidget>
#include<QScrollArea>
#include<QGroupBox>
#include<QDebug>
#include<QLineEdit>


class menu : public QWidget,public expend,public dab
{

Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
float a;
QHBoxLayout *hb4;
     QHBoxLayout *hb;
       QHBoxLayout *hb1;
        QHBoxLayout *hb2;
         QHBoxLayout *hb3;
         QHBoxLayout *hb5;
     QVBoxLayout *vb1;
     QVBoxLayout *vb2;
      QVBoxLayout *vb3;
     QLabel *select;
QPushButton *maxexp;
     QPushButton *food;
     QPushButton *entertainment;
     QPushButton *fuel;
     QPushButton *friends;
     QPushButton *family;
     QPushButton *shopping;
     QPushButton *others;
     QPushButton *check;
     QLineEdit *max;
     QPushButton *ok;
       QPushButton *cancel;
         QPushButton *exitt;
          QPushButton *bacc;
          QPushButton *more;
       float ret_exp();

float exp,exp1;


private:

public slots:
void foodshowFullScreen();
void shopshowFullScreen();
void entshowFullScreen();
void fmshowFullScreen();
void fushowFullScreen();
void otshowFullScreen();
void go();
void canc();
void max_click();
void check_save();
void ex();
void ba();

void mor();
};
#endif // MENU_H
