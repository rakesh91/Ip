#include "save.h"
#include "menu.h"

save::save(QWidget *parent) :
    QWidget(parent)
{
    QFont newfff("Arial",8,1,false);
    this->setStyleSheet("background-color:black");
 max_exp *ee=new max_exp();

 ma=new QLabel("Maximum Expenditure limit:Rs",this);
tot=new QLabel("Total amount of money spent:Rs",this);
sa=new QLabel("Total amount of money saved:Rs",this);
ma->setFixedHeight(50);
 ma->setFont(newfff);

sa->setFixedHeight(50);
 sa->setFont(newfff);
tot->setFixedHeight(50);
 tot->setFont(newfff);
ma1=new QLabel(this);
tot1=new QLabel(this);
sa1=new QLabel(this);
ma1->setNum(ee->mexp);
ma1->setFixedHeight(50);
tot1->setNum(ee->total_spent);
tot1->setFixedHeight(50);
sa1->setNum(ee->mexp-ee->total_spent);
sa1->setFixedHeight(50);
 ma1->setFont(newfff);
  tot1->setFont(newfff);
   sa1->setFont(newfff);

ma->setStyleSheet("background-color:#003333;color:white");
tot->setStyleSheet("background-color:#003333;color:white");
sa->setStyleSheet("background-color:#003333;color:white");
ma1->setStyleSheet("background-color:#003333;color:white");
tot1->setStyleSheet("background-color:#003333;color:white");
sa1->setStyleSheet("background-color:#003333;color:white");


me=new QPushButton("Menu",this);
 me->setStyleSheet("background-color:#003333;color:white");
 me->setFont(newfff);

 QObject::connect(me,SIGNAL(clicked()),this,SLOT(mm()));
hb=new QHBoxLayout();
hb1=new QHBoxLayout();
hb2=new QHBoxLayout();
vb=new QVBoxLayout(this);
 hb->addWidget(ma);
 hb->addWidget(ma1,Qt::AlignLeft);

 hb1->addWidget(tot);
 hb1->addWidget(tot1,Qt::AlignLeft);

 hb2->addWidget(sa);
 hb2->addWidget(sa1,Qt::AlignLeft);

 vb->addItem(hb);
 vb->addItem(hb1);
 vb->addItem(hb2);
 vb->addWidget(me);



}

void save::mm()
{
    menu *mmm=new menu();
    mmm->showFullScreen();
}
