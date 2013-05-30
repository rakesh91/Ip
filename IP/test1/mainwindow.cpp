#include "mainwindow.h"
#include "menu.h"
#include "expend.h"
#include"cred.h"
#include <QPalette>
#include <QPixmap>
#include<QRect>
#include <QFont>
#include<QFontDatabase>
#include "help1.h"
#include "exitt1.h"
#include <QWebView>
#include <QUrl>
#include "more.h"
mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),expend()
{

    this->setStyleSheet("background-color:black");

    QFont newf("Comic Sans MS",16,1,false);
    title=new QLabel("Budget Diary",this);
   title->setFont(newf);
    title->setStyleSheet("color:white");
    title->setFixedSize(360,100);
    title->setAlignment(Qt::AlignCenter);

    next=new QPushButton("Menu",this);
    next->setStyleSheet("background-color:#003333;color:white");

    help=new QPushButton("Help",this);
    help->setStyleSheet("background-color:#003333;color:white");

    credits=new QPushButton("Credits",this);
    credits->setStyleSheet("background-color:#003333;color:white");

    exit1=new QPushButton("Exit",this);
    exit1->setStyleSheet("background-color:#003333;color:white");

    mg=new QPushButton("More Games",this);
    mg->setStyleSheet("background-color:#003333;color:white");


    vb=new QVBoxLayout(this);
    vb->addWidget(title);

    vb->addWidget(next);
     vb->addWidget(help);
      vb->addWidget(credits);
      vb->addWidget(mg);
       vb->addWidget(exit1);


    QObject::connect(next,SIGNAL(clicked()),this,SLOT(menuWindow()));
    QObject::connect(credits,SIGNAL(clicked()),this,SLOT(creditwindow()));
     QObject::connect(exit1,SIGNAL(clicked()),this,SLOT(e()));
     QObject::connect(help,SIGNAL(clicked()),this,SLOT(helpwindow()));
     QObject::connect(mg,SIGNAL(clicked()),this,SLOT(mgc()));
}

void mainwindow::menuWindow()
{

        men=new menu();
        men->setStyleSheet("background-color:black");
        men->showFullScreen();


}

void mainwindow::creditwindow()
{
    cr=new cred();
    cr->setStyleSheet("background-color:black");
    cr->showFullScreen();
}

void mainwindow::e()
{
    flag=1;
    exitt1 *ee1=new exitt1();
    ee1->showFullScreen();
}

void mainwindow::helpwindow()
{
    he=new help1();
    he->showFullScreen();
}

void mainwindow::mgc()
{
    more *more1=new more();
    more1->showFullScreen();

}

