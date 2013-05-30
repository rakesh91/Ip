#include "spl.h"
#include "mainwindow.h"
spl::spl(QWidget *parent) :
    QWidget(parent)
{

        ql=new QLabel("<img src='D:/splashscreen-portrait2.jpg'/ >",this);
       ql->setFixedSize(360,640);
   qt1=new QTimer(this);
qt1->start();


QTimer::singleShot(3000, this, SLOT(updates()));
}

void spl::updates()
{
    //qt1->stop();
    mainwindow *mw=new mainwindow();
  mw->showFullScreen();
}
