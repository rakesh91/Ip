#include "more.h"
#include <QWebView>
#include <QUrl>
#include <QDebug>
#include <QVBoxLayout>
#include "mainwindow.h"
#include <QFont>
more::more(QWidget *parent) :
    QWidget(parent)
{
    QFont newff("Arial",14,QFont::Normal,false);
    QVBoxLayout *vv=new QVBoxLayout(this);
    qll=new QPushButton("Close",this);
    qll->setFont(newff);


    qll->setStyleSheet("background-color:#003333;color:white");

//qll->setAlignment(Qt::AlignTop);

qDebug()<<"viewed";


QWebView *vieww=new QWebView();


    vieww->setStyleSheet("background-color:rgb(150,147,88); padding: 7px ; color:rgb(255,255,255)");
    vieww->load(QUrl("http://store.ovi.com/publisher/StudentDeveloper"));
    vv->addWidget(qll);
    vv->addWidget(vieww);

    //vieww->showMaximized();
    qDebug()<<"heree";
    QObject::connect(qll,SIGNAL(clicked()),this,SLOT(morec()));
}

void more::morec()
{
    mainwindow *m7=new mainwindow();
    m7->showFullScreen();
}
