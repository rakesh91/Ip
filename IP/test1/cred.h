#ifndef CRED_H
#define CRED_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include<QFont>
#include<QVBoxLayout>
class cred : public QWidget
{
    Q_OBJECT
public:
    explicit cred(QWidget *parent = 0);
    QLabel *credit;
    QPushButton *back;
    QVBoxLayout *v;


signals:

public slots:
    void mee();

};

#endif // CRED_H
