#ifndef DISPLAY_H
#define DISPLAY_H

#include <QWidget>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QListWidgetItem>
class display : public QWidget
{
    Q_OBJECT
public:
    explicit display(QWidget *parent = 0);


signals:

public slots:

};

#endif // DISPLAY_H
