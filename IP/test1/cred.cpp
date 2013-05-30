#include "cred.h"
#include "mainwindow.h"
cred::cred(QWidget *parent) :
    QWidget(parent)
{
    v=new QVBoxLayout(this);
this->setStyleSheet("background-color:black");
    QFont newf("Comic Sans MS",16,1,false);
    credit=new QLabel("Developer name:Sneha S Kamath");
    credit->setFont(newf);
     credit->setStyleSheet("color:white");
    credit->setAlignment(Qt::AlignCenter);
     back=new QPushButton("Back");

     back->setStyleSheet("background-color:#003333;color:white");
     back->setFont(newf);

     v->addWidget(credit);
     v->addWidget(back);
      QObject::connect(back,SIGNAL(clicked()),this,SLOT(mee()));
}

void cred::mee()
{
   mainwindow *mm=new mainwindow();
    mm->showFullScreen();

}
