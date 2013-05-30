#include "foodb.h"
#include "menu.h"
#include "foodt.h"
#include "fmt.h"
#include "fuelt.h"
#include "shoppingt.h"
#include "entt.h"
#include "othert.h"
#include "expend.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include<QSqlQueryModel>
#include<QFont>
#include "save.h"
#include "mainwindow.h"
#include "res1.h"
#include "exitt1.h"
menu::menu(QWidget *parent) :
    QWidget(parent),expend(),dab()

{
    this->setStyleSheet("background-color:black");
    QFont newff("Arial",10,QFont::Normal,false);
     QFont newfb("Arial",8,0,false);
    // QFont newfc("Arial",8,0,false);
     maxexp=new QPushButton("Reset your maximum expenditure limit",this);
     maxexp->setStyleSheet("background-color:#003333;color:white");
     maxexp->setFont(newfb);
     exitt=new QPushButton("Exit",this);
     exitt->setStyleSheet("background-color:#003333;color:white");
     exitt->setFont(newff);

     more=new QPushButton("More options",this);
     more->setStyleSheet("background-color:#003333;color:white");
     more->setFont(newff);



     bacc=new QPushButton("Back",this);
     bacc->setStyleSheet("background-color:#003333;color:white");
     bacc->setFont(newff);


     cancel=new QPushButton("Cancel",this);
     cancel->setStyleSheet("background-color:#003333;color:white");
     cancel->setFont(newff);
     cancel->setVisible(false);

     max=new QLineEdit("",this);
     max->setStyleSheet("background-color:white;color:black");
     max->setVisible(false);
     ok=new QPushButton("OK",this);
     ok->setVisible(false);
    ok->setStyleSheet("background-color:#003333;color:white");
    ok->setFont(newff);

     maxexp->setStyleSheet("background-color:#003333;color:white");
     maxexp->setFont(newff);
     hb4=new QHBoxLayout();

    vb1=new QVBoxLayout(this);

    hb=new QHBoxLayout();
    hb1=new QHBoxLayout();
     hb2=new QHBoxLayout();
      hb3=new QHBoxLayout();
      hb5=new QHBoxLayout();


     //select=new QLabel("<img src='D:/Desert.JPG'/ >",this);
       select=new QLabel("   Choose your category ",this);

       select->setStyleSheet("background-color:black;color:white; qproperty-alignment: AlignCenter");

       select->setAlignment(Qt::AlignTop);



       select->setMaximumHeight(45);
       select->setFont(newff);

       check=new QPushButton("Click to check total savings",this);
       check->setStyleSheet("background-color:#003333;color:white");

       check->setFont(newff);



    food=new QPushButton("food",this);
    food->setStyleSheet("background-color:#003333;color:white");
    food->setFixedSize(180,40);
    food->setFont(newff);

    shopping=new QPushButton("shopping",this);
    shopping->setFixedSize(180,40);
    shopping->setStyleSheet("background-color:#003333;color:white");
    shopping->setFont(newff);

    entertainment=new QPushButton("entertainment",this);
    entertainment->setStyleSheet("background-color:#003333;color:white");
    entertainment->setFixedSize(180,40);
    entertainment->setFont(newfb);

    family=new QPushButton("family/friends",this);
    family->setStyleSheet("background-color:#003333;color:white");
    family->setFixedSize(180,40);
    family->setFont(newff);

    fuel=new QPushButton("fuel",this);
    fuel->setStyleSheet("background-color:#003333;color:white");
    fuel->setFixedSize(180,40);
    fuel->setFont(newff);

    others=new QPushButton("others",this);
    others->setStyleSheet("background-color:#003333;color:white");
    others->setFixedSize(180,40);
 others->setFont(newff);

hb5->addWidget(check);
hb4->addWidget(max);
hb4->addWidget(ok);
hb4->addWidget(cancel);

   hb1->addWidget(food);
   hb1->addWidget(shopping);

   hb2->addWidget(entertainment);
   hb2->addWidget(family);

   hb3->addWidget(fuel);
   hb3->addWidget(others);
   vb1->addItem(hb5);
   vb1->addWidget(maxexp);

   vb1->addItem(hb4);
   vb1->addWidget(more);
   vb1->addWidget(select);

   vb1->addItem(hb1);
   vb1->addItem(hb2);
   vb1->addItem(hb3);
    vb1->addWidget(exitt);
    vb1->addWidget(bacc);



   QObject::connect(food,SIGNAL(clicked()),this,SLOT(foodshowFullScreen()));
   QObject::connect(shopping,SIGNAL(clicked()),this,SLOT(shopshowFullScreen()));
   QObject::connect(entertainment,SIGNAL(clicked()),this,SLOT(entshowFullScreen()));
   QObject::connect(family,SIGNAL(clicked()),this,SLOT(fmshowFullScreen()));
   QObject::connect(fuel,SIGNAL(clicked()),this,SLOT(fushowFullScreen()));
   QObject::connect(others,SIGNAL(clicked()),this,SLOT(otshowFullScreen()));
   QObject::connect(ok,SIGNAL(clicked()),this,SLOT(go()));
   QObject::connect(cancel,SIGNAL(clicked()),this,SLOT(canc()));
   QObject::connect(maxexp,SIGNAL(clicked()),this,SLOT(max_click()));
   QObject::connect(check,SIGNAL(clicked()),this,SLOT(check_save()));
   QObject::connect(exitt,SIGNAL(clicked()),this,SLOT(ex()));
   QObject::connect(bacc,SIGNAL(clicked()),this,SLOT(ba()));
   QObject::connect(more,SIGNAL(clicked()),this,SLOT(mor()));








}


void menu::foodshowFullScreen()
{

   foodt *fdt1=new foodt();


   fdt1->showFullScreen();
}

void menu::shopshowFullScreen()
{
    shoppingt *sdt1=new shoppingt();


    sdt1->showFullScreen();
}
void menu::entshowFullScreen()
{
    entt *ent1=new entt();


    ent1->showFullScreen();
}

void menu::fmshowFullScreen()
{
    fmt *fmt1=new fmt();


    fmt1->showFullScreen();
}

void menu::fushowFullScreen()
{
    fuelt *ft1=new fuelt();


    ft1->showFullScreen();

}

void menu::otshowFullScreen()
{
    othert *ot1=new othert();


    ot1->showFullScreen();

}

void menu::go()
{
   if(!(max->text().toFloat()) | max->text().isEmpty())
    {
        max->setText("please enter a valid number");
    }
   else
   {

        exp=max->text().toFloat();
        QSqlQuery query;
        qDebug()<<"=-=-=-=-="<<"---"<<query.exec("drop table max_exp" );

        qDebug()<<"=-=-=-=-="<<"---"<<query.exec("create table max_exp(maxamount real primary key )" );
        query.prepare("INSERT INTO max_exp(maxamount) "
                       "VALUES (:maxamount)");
         query.bindValue("maxamount",exp);


        qDebug()<<query.exec();
        qDebug()<<query.exec("select * from max_exp");
        while (query.next()) {
                QString country = query.value(0).toString();


                qDebug()<<country;
            }

    max->setVisible(false);
    ok->setVisible(false);
    cancel->setVisible(false);
   }

}

void menu::canc()
{
    max->setVisible(false);
    ok->setVisible(false);
    cancel->setVisible(false);
}

void menu::max_click()
{
    max->setVisible(true);
    ok->setVisible(true);
    cancel->setVisible(true);
}

float menu::ret_exp()
{
    exp1=0;
    QSqlQuery query;
    qDebug()<< query.exec("select maxamount from max_exp");
               while (query.next()) {
                   exp1=exp1+query.value(0).toFloat();

               }
               return exp1;
               qDebug()<<exp1<<"maxexp";
}

void menu::check_save()
{
    save *sv=new save();
    sv->showFullScreen();
}

void menu::ex()
{
    flag=2;
    exitt1 *e=new exitt1();
    e->showFullScreen();
}


void menu::ba()
{
    mainwindow *mai=new mainwindow();
    mai->showFullScreen();

}


void menu::mor()
{
    res1 *r1=new res1();
    r1->showFullScreen();



}

