#include <QApplication>
#ifdef Q_OS_SYMBIAN
#include <eikenv.h>
#include <eikappui.h>
#include <aknenv.h>
#include <aknappui.h>
#endif
#include "mainwindow.h"
#include "expend.h"
#include "max_exp.h"
#include "save.h"
#include "spl.h"
#include <QDebug>
int main(int c,char **v)
{
    QApplication app(c,v);

    save();
#ifdef Q_OS_SYMBIAN
    CAknAppUi* appUi = dynamic_cast<CAknAppUi*> (CEikonEnv::Static()->AppUi());
    TRAPD(error,
    if (appUi) {
        // Lock application orientation into landscape
        appUi->SetOrientationL(CAknAppUi::EAppUiOrientationPortrait);
    }
    );
    #endif
spl sp;
sp.setStyleSheet("background-image: url(:imgss/splashscreen-portrait2.jpg)");

sp.setAutoFillBackground(true);
sp.showFullScreen();
qDebug()<<"out";
    app.exec();
    return 0;
}
