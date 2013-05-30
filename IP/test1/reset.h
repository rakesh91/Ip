#ifndef RESET_H
#define RESET_H

#include <QWidget>
#include <QPushButton>
#include<QVBoxLayout>
#include<QFont>

class reset : public QWidget//,public foodb,public shoppingb,public fuelb,public otherb,public entb,public fmb
{
    Q_OBJECT
public:
    explicit reset(QWidget *parent = 0);

    QPushButton *rall;
    QPushButton *rfood;
    QPushButton *rent;
    QPushButton *rshop;
    QPushButton *rfuel;
    QPushButton *rfam;
    QPushButton *roth;
    QVBoxLayout *vbb;



signals:

public slots:

};

#endif // RESET1_H
