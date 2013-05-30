#include "shoppingb.h"
#include "shoppingt.h"
#include "menu.h"
shoppingb::shoppingb(QWidget *parent) :
    QWidget(parent),expend(),dab()
{
    this->setStyleSheet("background-color:black");





    QSqlQuery query;

    qDebug()<<"=-=-=-=-="<<"---"<<query.exec("create table shoppingtable4(amount varchar(10),location varchar(40),date varchar(40),time varchar(29) primary key )" );
          qDebug()<<"here1";



          back=new QPushButton("Menu",this);
         back->setStyleSheet("background-color:#003333;color:white");
hb1=new QHBoxLayout();

hb=new QVBoxLayout(this);

enter=new QLabel("Enter the amount in Rs:",this);
enter->setFixedSize(360,40);
enter->setStyleSheet("color:white;background-color:black;qproperty-alignment: AlignCenter");
pla=new QLabel("Enter the location:",this);
pla->setStyleSheet("color:white;background-color:black;qproperty-alignment: AlignCenter");
pla->setFixedSize(360,40);



input1=new QLineEdit(" ",this);
input1->setStyleSheet("background-color:white;color:black");
place=new QLineEdit("",this);
place->setStyleSheet("background-color:white;color:black");
submit=new QPushButton("Submit",this);
submit->setStyleSheet("background-color:#003333;color:white");
hb1->addWidget(submit);
hb1->addWidget(back);


hb->addWidget(enter);
hb->addWidget(input1);

hb->addWidget(pla);
hb->addWidget(place);

hb->addItem(hb1);

QObject::connect(submit,SIGNAL(clicked()),this,SLOT(submitt()));
QObject::connect(back,SIGNAL(clicked()),this,SLOT(menuscr()));

}






      void shoppingb::submitt()
      {








QDate date = QDate::currentDate();
QString dateString = date.toString();
QTime time = QTime::currentTime();
QString timeString = time.toString();
if(!(input1->text().toFloat()) | input1->text().isEmpty())
{
    input1->setText("please enter a valid number");
}
else
{
QSqlQuery query1;

query1.prepare("INSERT INTO shoppingtable4(amount,location,date,time) "
               "VALUES (:amount,:location,:date,:time)");
 query1.bindValue("amount", input1->text());
 query1.bindValue("location",""+place->text());
 query1.bindValue("date",dateString);
 query1.bindValue("time",timeString);

qDebug()<<query1.exec();
input1->setText("");


place->setText("");
shoppingt* sdt=new shoppingt();
sdt->showFullScreen();
}


      }

      void shoppingb::menuscr()
      {
          menu *men1=new menu();
          men1->showFullScreen();

      }


