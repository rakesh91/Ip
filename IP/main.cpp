#include <QApplication>
#include <QHostAddress>
#include <QNetworkInterface>
#include "display.h"

 #include "ui_form.h"
int main(int argc,char **v)
{
    QApplication app(argc,v);
    display *d=new display();
    d->show();
    app.exec();
    return 0;

}

