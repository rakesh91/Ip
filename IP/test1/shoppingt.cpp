#include "shoppingt.h"
#include "menu.h"
shoppingt::shoppingt(QWidget *parent) :
    QWidget(parent),expend()
{
    this->setStyleSheet("background-color:black");


    hb1=new QHBoxLayout();
    hb3=new QHBoxLayout();
    add=new QPushButton("add entry",this);

    bac=new QPushButton("Menu");
    bac->setStyleSheet("background-color:#003333;color:white");
spent_sh=0;
    qDebug()<<"saved";
    QSqlQuery query;
  qDebug()<< query.exec("select amount from shoppingtable4");
    while (query.next()) {
        this->spent_sh=this->spent_sh+query.value(0).toFloat();



        }
qDebug()<<this->spent_sh;

 vb=new QVBoxLayout(this);
saved1=new QLabel("Total expenditure on shopping is:Rs", this);
val=new QLabel(this);
val->setNum(this->spent_sh);
hb=new QHBoxLayout();
hb->addWidget(saved1);
hb->addWidget(val,Qt::AlignLeft);


    del=new QPushButton("delete entry",this);

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

     model->setQuery("select * from shoppingtable4");


     view->setModel(model);
     view->horizontalHeader()->resizeSection(0,100);

     view->horizontalHeader()->resizeSection(1,250);
      view->horizontalHeader()->resizeSection(2,180);
      view->horizontalHeader()->resizeSection(3,200);
     view->show();

     vb->addWidget(view);
      vb->addWidget(bac);



QObject::connect(add,SIGNAL(clicked()),this,SLOT(addclick()));
QObject::connect(bac,SIGNAL(clicked()),this,SLOT(menu1()));
 QObject::connect(del,SIGNAL(clicked()),this,SLOT(remove()));

}

void shoppingt::remove()
{
    QString  ID = model->data(model->index(view->selectionModel()->currentIndex().row(),0)).toString();
    QSqlQuery  query;
    query.prepare("delete from shoppingtable4 WHERE amount = ?");
    query.addBindValue(ID);
    qDebug()<<query.exec();
      this->spent_sh=this->spent_sh-ID.toFloat();
    model->setQuery("select * from shoppingtable4");
    view->setModel(model);

    view->showMaximized();


val->setNum(spent_sh);
}
void shoppingt::addclick()
{


    sb=new shoppingb();
    sb->showFullScreen();




}

void shoppingt::menu1()
{
    menu *m=new menu();
    m->showFullScreen();
}



