#include "foodt.h"
#include "foodb.h"
#include "menu.h"
#include <QDebug>

foodt::foodt(QWidget *parent) :
    QWidget(parent),expend()
    {

    this->setStyleSheet("background-color:black");


    hb1=new QHBoxLayout();
    hb3=new QHBoxLayout();
    add=new QPushButton("add entry",this);

    add->setStyleSheet("background-color:#003333;color:white");
    bac=new QPushButton("Menu");
    bac->setStyleSheet("background-color:#003333;color:white");
this->saved=0;
    qDebug()<<"saved";
    QSqlQuery query;
  qDebug()<< query.exec("select amount from foodtable4");
    while (query.next()) {
        this->saved=this->saved+query.value(0).toFloat();



        }
qDebug()<<this->saved;

 vb=new QVBoxLayout(this);
saved1=new QLabel("Total expenditure on food is:Rs", this);
val=new QLabel(this);
val->setNum(this->saved);
hb=new QHBoxLayout();
hb->addWidget(saved1);
hb->addWidget(val,Qt::AlignLeft);


    del=new QPushButton("delete entry",this);

    del->setStyleSheet("background-color:#003333;color:white");
    hb3->addWidget(add);
    hb3->addWidget(del);
    vb->addItem(hb);
    vb->addItem(hb3);

    qDebug()<<"showw";

    this->model=new QSqlQueryModel();
    view=new QTableView(this);

   view->resizeColumnsToContents();
    view->resizeRowsToContents();



    view->setColumnWidth(0,900 );
    view->setColumnWidth( 1,3000);

     model->setQuery("select * from foodtable4");


     view->setModel(model);
     view->horizontalHeader()->resizeSection(0,100);

     view->horizontalHeader()->resizeSection(1,250);
      view->horizontalHeader()->resizeSection(2,180);
      view->horizontalHeader()->resizeSection(3,200);


     vb->addWidget(view);
     vb->addWidget(bac);




QObject::connect(add,SIGNAL(clicked()),this,SLOT(addclick()));
QObject::connect(bac,SIGNAL(clicked()),this,SLOT(menu1()));
 QObject::connect(del,SIGNAL(clicked()),this,SLOT(remove()));
}

void foodt::remove()
{
    QString  ID = model->data(model->index(view->selectionModel()->currentIndex().row(),0)).toString();
    QSqlQuery  query;
    query.prepare("delete from foodtable4 WHERE amount = ?");
    query.addBindValue(ID);
    qDebug()<<query.exec();
      this->saved=this->saved-ID.toFloat();
    model->setQuery("select * from foodtable4");
    view->setModel(model);





qDebug()<<this->saved;

val->setNum(saved);
}
void foodt::addclick()
{


    fb=new foodb();
    fb->showFullScreen();




}

void foodt::menu1()
{
    menu *me=new menu();
    me->showFullScreen();

}


