#ifndef SNEAK_H
#define SNEAK_H

#include <QWidget>
#include <iostream>
#include <vector>
#include <cmath>
#include <QString>
#include <QPoint>

using namespace std;

class sneak : public QWidget
{
    Q_OBJECT
public:
    explicit sneak(QWidget *parent = 0);
    void move(double r,double angle);
    void print();
    QString get();

protected:
    void paintEvent(QPaintEvent *event);

private:
    int x;
    int y;
    QPoint *p;
};

#endif // SNEAK_H
