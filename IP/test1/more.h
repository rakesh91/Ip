#ifndef MORE_H
#define MORE_H

#include <QWidget>
#include <QPushButton>

class more : public QWidget
{
    Q_OBJECT
public:
    explicit more(QWidget *parent = 0);
    QPushButton *qll;

signals:

public slots:
    void morec();

};

#endif // MORE_H
