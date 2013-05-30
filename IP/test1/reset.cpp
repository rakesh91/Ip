#include "reset.h"

reset::reset(QWidget *parent) :
    QWidget(parent)
{
    QFont newff1("Arial",10,0,false);

    rall=new QPushButton("Reset all entries in all categories",this);
    rall->setStyleSheet("background-color:#003333;color:white");
    rall->setFont(newff1);

    rfood=new QPushButton("Reset all entries in the food category",this);
   rfood->setStyleSheet("background-color:#003333;color:white");
    rfood->setFont(newff1);

    rent=new QPushButton("Reset all entries in the entertainment category",this);
   rent->setStyleSheet("background-color:#003333;color:white");
    rent->setFont(newff1);

    rfam=new QPushButton("Reset all entries in the family/friends category",this);
   rfam->setStyleSheet("background-color:#003333;color:white");
    rfam->setFont(newff1);

    rfuel=new QPushButton("Reset all entries in the fuel category",this);
   rfuel->setStyleSheet("background-color:#003333;color:white");
    rfuel->setFont(newff1);

    roth=new QPushButton("Reset all entries in the others category",this);
   roth->setStyleSheet("background-color:#003333;color:white");
    roth->setFont(newff1);

    rshop=new QPushButton("Reset all entries in the shopping category",this);
   rshop->setStyleSheet("background-color:#003333;color:white");
    rshop->setFont(newff1);


    vbb=new QVBoxLayout(this);
    vbb->addWidget(rall);
    vbb->addWidget(rfood);
    vbb->addWidget(rshop);
    vbb->addWidget(rent);
    vbb->addWidget(rfam);
    vbb->addWidget(rfuel);
    vbb->addWidget(roth);


}
