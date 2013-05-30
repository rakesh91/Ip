#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "menu.h"
#include "expend.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QPalette>
#include <QMainWindow>
#include "cred.h"
#include "help1.h"
#include<QFont>
class mainwindow : public QWidget,public expend
{

Q_OBJECT


public:

    explicit mainwindow(QWidget *parent = 0);

    QVBoxLayout *vb;
    QLabel *title;
    QPushButton *next;
    QPushButton *exit1;
    QPushButton *help;
    QPushButton *credits;
    QPushButton *mg;
    //void setback();
signals:


public slots:
void menuWindow();
void creditwindow();
void mgc();
void e();
void helpwindow();


public:
menu *men;
cred *cr;
help1 *he;

};
#endif // MAINWINDOW_H
