#ifndef RES1_H
#define RES1_H
#include <QWidget>
#include <QPushButton>
#include<QVBoxLayout>
#include<QFont>
#include <QWidget>

class res1 : public QWidget
{
    Q_OBJECT
public:
    explicit res1(QWidget *parent = 0);
    QPushButton *rall;
    QPushButton *rfood;
    QPushButton *rent;
    QPushButton *rshop;
    QPushButton *rfuel;
    QPushButton *rfam;
    QPushButton *roth;
    QPushButton *back;
    QVBoxLayout *vbb;


signals:

public slots:
    void rallc();
    void rfoodc();
    void rshopc();
    void rentc();
    void rfuelc();
    void rfamc();
   void rothc();
   void mai();

};

#endif // RES1_H
