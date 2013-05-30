#include "max_exp.h"
#include <QDebug>

max_exp::max_exp():foodb(),shoppingb(),fuelb(),otherb(),entb(),fmb()
{

    QSqlQuery query;
  qDebug()<< query.exec("select amount from foodtable4");
sspent=fspent=fuspent=otspent=espent=fmspent=mexp=0;
    while (query.next()) {
        fspent=fspent+query.value(0).toFloat();

    }
    qDebug()<<fspent<<"m";


  qDebug()<< query.exec("select amount from shoppingtable4");
    while (query.next()) {
        sspent=sspent+query.value(0).toFloat();

    }
    qDebug()<<sspent<<"mmmmmmmmmm";



    qDebug()<< query.exec("select amount from fueltable4");
      while (query.next()) {
          fuspent=fuspent+query.value(0).toFloat();

      }
      qDebug()<<fuspent<<"fuspent";


      qDebug()<< query.exec("select amount from othertable4");
        while (query.next()) {
            otspent=otspent+query.value(0).toFloat();

        }
        qDebug()<<otspent<<"otspent";

        qDebug()<< query.exec("select amount from entable4");
          while (query.next()) {
              espent=espent+query.value(0).toFloat();

          }
          qDebug()<<espent<<"espent";



 qDebug()<< query.exec("select amount from fmtable4");
            while (query.next()) {
                fmspent=fmspent+query.value(0).toFloat();

            }
            qDebug()<<fmspent<<"fspent";

total_spent=fspent+sspent+otspent+fuspent+fmspent+espent;

qDebug()<<total_spent<<"tot";

menu *mm=new menu();
mexp=mm->ret_exp();
qDebug()<<mexp<<"mac";
}
