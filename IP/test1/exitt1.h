#ifndef exitt1_H
#define exitt1_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include "expend.h"

class exitt1 : public QWidget,public expend
{
    Q_OBJECT
public:
    explicit exitt1(QWidget *parent = 0);
    QPushButton *yes;
    QPushButton *no;
    QLabel *sure;
    QVBoxLayout *vbb;
    QHBoxLayout *hbb;


signals:

public slots:
    void yesc();
    void noc();

};

#endif // exitt1_H
