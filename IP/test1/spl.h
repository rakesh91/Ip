#ifndef SPL_H
#define SPL_H
#include <QLabel>
#include <QWidget>
#include <QTimer>
class spl : public QWidget
{
    Q_OBJECT
public:
    explicit spl(QWidget *parent = 0);
    QLabel *ql;
QTimer *qt1;
signals:

public slots:
void updates();
};

#endif // SPL_H
