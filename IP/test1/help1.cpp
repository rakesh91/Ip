#include "help1.h"
//#include<QLabel>
#include <QFont>
#include "menu.h"
#include "mainwindow.h"
help1::help1(QWidget *parent) :
    QWidget(parent)
{
    this->setStyleSheet("background-color:black");
    vb2=new QVBoxLayout(this);
    hel=new QLabel(this);
    hel->setFixedWidth(360);
    hel->setAlignment(Qt::AlignTop);
    hel->setStyleSheet("color:white");
    QFont newff1("Arial",18,QFont::Normal,false);
    QFont newfb("Arial",12,QFont::Normal,false);
    hel->setLineWidth(340);
    hel->setText("1.This applications helps you keep \ntrack nof your daily expenses.\n2.Add entries into suitable\n categories.\n3.Selecting one of the entries and\n clicking the delete entry button\n deletes the entire row in the table.\n4.You can reset all entries\n made in all tables or reset\nindividual tables.\n5.You can set your maximum\n expenditure limit and check your\n total savings and expenditure.\n");

    hel->setFont(newff1);

    mennu=new QPushButton("Back",this);
    mennu->setStyleSheet("background-color:#003333;color:white");
    mennu->setFont(newfb);

    vb2->addWidget(hel);
    vb2->addWidget(mennu);
    QObject::connect(mennu,SIGNAL(clicked()),this,SLOT(helpc()));

}

void help1::helpc()
{
    mainwindow *m3=new mainwindow();
    m3->showFullScreen();
}
