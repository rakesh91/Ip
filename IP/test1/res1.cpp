#include "res1.h"
#include "foodb.h"
#include "foodt.h"
#include "shoppingb.h"
#include "entb.h"
#include "fmb.h"
#include "fuelb.h"
#include "otherb.h"
#include "menu.h"

res1::res1(QWidget *parent) :
    QWidget(parent)
{
    this->setStyleSheet("background-color:black");

    QFont newff1("Arial",10,0,false);

    rall=new QPushButton("Reset all entries in all categories",this);
    rall->setStyleSheet("background-color:#003333;color:white");
    rall->setFont(newff1);

    rfood=new QPushButton("Reset all entries in the food category",this);
   rfood->setStyleSheet("background-color:#003333;color:white");
    rfood->setFont(newff1);

    rent=new QPushButton("Reset all entries in the entertainment category",this);
   rent->setStyleSheet("background-color:#003333;color:white");
    rent->setFont(newff1);

    rfam=new QPushButton("Reset all entries in the family/friends category",this);
   rfam->setStyleSheet("background-color:#003333;color:white");
    rfam->setFont(newff1);

    rfuel=new QPushButton("Reset all entries in the fuel category",this);
   rfuel->setStyleSheet("background-color:#003333;color:white");
    rfuel->setFont(newff1);

    roth=new QPushButton("Reset all entries in the others category",this);
   roth->setStyleSheet("background-color:#003333;color:white");
    roth->setFont(newff1);

    rshop=new QPushButton("Reset all entries in the shopping category",this);
   rshop->setStyleSheet("background-color:#003333;color:white");
    rshop->setFont(newff1);

    back=new QPushButton("Back",this);
    back->setStyleSheet("background-color:#003333;color:white");
    back->setFont(newff1);


    vbb=new QVBoxLayout(this);
    vbb->addWidget(rall);
    vbb->addWidget(rfood);
    vbb->addWidget(rshop);
    vbb->addWidget(rent);
    vbb->addWidget(rfam);
    vbb->addWidget(rfuel);
    vbb->addWidget(roth);
    vbb->addWidget(back);
    QObject::connect(rall,SIGNAL(clicked()),this,SLOT(rallc()));
    QObject::connect(rshop,SIGNAL(clicked()),this,SLOT(rshopc()));
    QObject::connect(rfood,SIGNAL(clicked()),this,SLOT(rfoodc()));
    QObject::connect(rfuel,SIGNAL(clicked()),this,SLOT(rfuelc()));
    QObject::connect(rent,SIGNAL(clicked()),this,SLOT(rentc()));
    QObject::connect(roth,SIGNAL(clicked()),this,SLOT(rothc()));
    QObject::connect(rfam,SIGNAL(clicked()),this,SLOT(rfamc()));
    QObject::connect(back,SIGNAL(clicked()),this,SLOT(mai()));


}

void res1::rallc()
{
    QSqlQuery query1;
  qDebug()<< query1.exec("delete from foodtable4");
  qDebug()<<"dd";

  QSqlQuery query2;
qDebug()<< query2.exec("delete from shoppingtable4");
qDebug()<<"dd";

QSqlQuery query3;
qDebug()<< query3.exec("delete from entable4");
qDebug()<<"dd";

QSqlQuery query4;
qDebug()<< query4.exec("delete from fueltable4");
qDebug()<<"dd";

QSqlQuery query5;
qDebug()<< query5.exec("delete from fmtable4");
qDebug()<<"dd";

QSqlQuery query6;
qDebug()<< query6.exec("delete from othertable4");
qDebug()<<"dd";



}

void res1::rfoodc()
{
    QSqlQuery query1;
  qDebug()<< query1.exec("delete from foodtable4");

}

void res1::rshopc()
{
    QSqlQuery query2;
  qDebug()<< query2.exec("delete from shoppingtable4");
}

void res1::rentc()
{
    QSqlQuery query3;
    qDebug()<< query3.exec("delete from entable4");
}

void res1::rfuelc()
{
    QSqlQuery query4;
    qDebug()<< query4.exec("delete from fueltable4");
}

void res1::rfamc()
{
    QSqlQuery query5;
    qDebug()<< query5.exec("delete from fmtable4");
}

void res1::rothc()
{
    QSqlQuery query6;
    qDebug()<< query6.exec("delete from othertable4");
}

void res1::mai()
{
    menu *menn=new menu();
    menn->showFullScreen();
}
