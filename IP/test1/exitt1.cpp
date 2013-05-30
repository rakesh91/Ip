#include "exitt1.h"
#include "menu.h"
#include "mainwindow.h"
#include <QFont>
exitt1::exitt1(QWidget *parent) :
    QWidget(parent),expend()
{
    this->setStyleSheet("background-color:black");
    QFont newff("Arial",10,QFont::Normal,false);
     QFont newfb("Arial",14,0,false);
    // QFont newfc("Arial",8,0,false);

     yes=new QPushButton("Yes",this);
     yes->setStyleSheet("background-color:#003333;color:white");
     yes->setFont(newff);


     no=new QPushButton("No",this);
     no->setStyleSheet("background-color:#003333;color:white");
     no->setFont(newff);



     sure=new QLabel(" Are you sure you want to exit? ",this);

     sure->setStyleSheet("background-color:black;color:white;");
     sure->setFont(newfb);

     sure->setAlignment(Qt::AlignCenter);
     hbb=new QHBoxLayout();
     hbb->addWidget(yes);
     hbb->addWidget(no);
     vbb=new QVBoxLayout(this);
     vbb->addWidget(sure);
     vbb->addItem(hbb);

     QObject::connect(yes,SIGNAL(clicked()),this,SLOT(yesc()));
     QObject::connect(no,SIGNAL(clicked()),this,SLOT(noc()));

}

void exitt1::yesc()
{
     QCoreApplication::quit();
}

void exitt1::noc()
{
    if(flag==1)
    {
        mainwindow *mmw=new mainwindow();
        mmw->showFullScreen();
    }
    else
    {
    menu *mm=new menu();
    mm->showFullScreen();
    }

}
