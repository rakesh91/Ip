#ifndef SAVE_H
#define SAVE_H

#include <QWidget>
#include <QLabel>
#include "menu.h"
#include "max_exp.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QFont>
class save : public QWidget
{
    Q_OBJECT
public:
    explicit save(QWidget *parent = 0);
    QLabel *ma;
    QLabel *tot;
    QLabel *sa;
    QLabel *ma1;
    QLabel *tot1;
    QLabel *sa1;
    QHBoxLayout *hb;
    QHBoxLayout *hb1;
    QHBoxLayout *hb2;
    QVBoxLayout *vb;
    QPushButton *me;




signals:

public slots:
    void mm();
};

#endif // SAVE_H
