#ifndef SNEAK_H
#define SNEAK_H

#include <QObject>
#include <iostream>
#include <vector>
#include <cmath>
#include <QString>

using namespace std;

class sneak : public QObject
{
    Q_OBJECT
public:
    explicit sneak(QObject *parent = 0);
    void move(double r,double angle);
    void print();
    QString get();

signals:

public slots:

private:
    int x;
    int y;
};

#endif // SNEAK_H
