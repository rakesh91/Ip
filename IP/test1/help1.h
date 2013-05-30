#ifndef HELP1_H
#define HELP1_H
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
class help1 : public QWidget
{
    Q_OBJECT
public:
    explicit help1(QWidget *parent = 0);
    QLabel *hel;
    QPushButton *mennu;
    QVBoxLayout *vb2;

signals:

public slots:
    void helpc();
};

#endif // HELP1_H
