#include "fmt.h"

#include "fmb.h"
#include "menu.h"
#include <QDebug>

fmt::fmt(QWidget *parent) :
    QWidget(parent),expend()
    {

    this->setStyleSheet("background-color:black");


    hb1=new QHBoxLayout();
    hb3=new QHBoxLayout();
    add=new QPushButton("add entry",this);

    add->setStyleSheet("background-color:#003333;color:white");
    bac=new QPushButton("Menu");
    bac->setStyleSheet("background-color:#003333;color:white");
spent_fm=0;
    qDebug()<<"saved";
    QSqlQuery query;
  qDebug()<< query.exec("select amount from fmtable4");
    while (query.next()) {
        spent_fm=spent_fm+query.value(0).toFloat();



        }
qDebug()<<spent_fm;

 vb=new QVBoxLayout(this);
saved1=new QLabel("Total expenditure on family/friends is:Rs", this);
val=new QLabel(this);
val->setNum(spent_fm);
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

     model->setQuery("select * from fmtable4");


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

void fmt::remove()
{
    QString  ID = model->data(model->index(view->selectionModel()->currentIndex().row(),0)).toString();
    QSqlQuery  query;
    query.prepare("delete from fmtable4 WHERE amount = ?");
    query.addBindValue(ID);
    qDebug()<<query.exec();
      spent_fm=spent_fm-ID.toFloat();
    model->setQuery("select * from fmtable4");
    view->setModel(model);





qDebug()<<spent_fm;

val->setNum(spent_fm);
}
void fmt::addclick()
{


    fb=new fmb();
    fb->showFullScreen();




}

void fmt::menu1()
{
    menu *me=new menu();
    me->showFullScreen();

}



