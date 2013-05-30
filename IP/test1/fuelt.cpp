#include "fuelt.h"


#include "fuelb.h"
#include "menu.h"
#include <QDebug>

fuelt::fuelt(QWidget *parent) :
    QWidget(parent),expend()
    {

    this->setStyleSheet("background-color:black");


    hb1=new QHBoxLayout();
    hb3=new QHBoxLayout();
    add=new QPushButton("add entry",this);

    add->setStyleSheet("background-color:#003333;color:white");
    bac=new QPushButton("Menu");
    bac->setStyleSheet("background-color:#003333;color:white");
spent_fu=0;
    qDebug()<<"saved";
    QSqlQuery query;
  qDebug()<< query.exec("select amount from fueltable4");
    while (query.next()) {
        spent_fu=spent_fu+query.value(0).toFloat();



        }
qDebug()<<spent_fu;

 vb=new QVBoxLayout(this);
saved1=new QLabel("Total expenditure on fuel is:Rs", this);
val=new QLabel(this);
val->setNum(spent_fu);
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

     model->setQuery("select * from fueltable4");


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

void fuelt::remove()
{
    QString  ID = model->data(model->index(view->selectionModel()->currentIndex().row(),0)).toString();
    QSqlQuery  query;
    query.prepare("delete from fueltable4 WHERE amount = ?");
    query.addBindValue(ID);
    qDebug()<<query.exec();
      spent_fu=spent_fu-ID.toFloat();
    model->setQuery("select * from fueltable4");
    view->setModel(model);





qDebug()<<spent_fu;

val->setNum(spent_fu);
}
void fuelt::addclick()
{


    fb=new fuelb();
    fb->showFullScreen();




}

void fuelt::menu1()
{
    menu *me=new menu();
    me->showFullScreen();

}


