#include "display.h"

display::display(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout *h=new QHBoxLayout(this);
    QListWidget *listWidget = new QListWidget();


    foreach(QNetworkInterface interface, QNetworkInterface::allInterfaces())
    {
       if (interface.flags().testFlag(QNetworkInterface::IsRunning))
         foreach (QNetworkAddressEntry entry, interface.addressEntries())
         {
           if ( interface.hardwareAddress() != "00:00:00:00:00:00" &&     entry.ip().toString().contains("."))
             {
               listWidget->addItem(new QListWidgetItem(interface.humanReadableName()+":  m" + entry.ip().toString()));

             }
         }
    }
    h->addWidget(listWidget);
}
