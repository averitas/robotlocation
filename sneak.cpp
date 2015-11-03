#include "sneak.h"
#include <QPainter>

#define PI 3.1415926535897932

sneak::sneak(QWidget *parent) : QWidget(parent)
{
    resize(400,300);
    setWindowTitle(tr("Paint &Demo"));
    p=new QPoint;
    x=200;
    y=150;
    p->setX(x);
    p->setY(y);
}

void sneak::move(double r, double angle){
    x=x+r*cos(angle*PI/180);
    y=y+r*sin(angle*PI/180);
    p->setX(x);
    p->setY(y);
    update();
}

void sneak::paintEvent(QPaintEvent *event)
{
        QPainter painter(this);
        painter.setPen(Qt::black);
        painter.drawLine(200, 0, 200, 300);
        painter.drawLine(0, 150, 400, 150);
        painter.setBrush(Qt::red);
        painter.drawEllipse(*p,2,2);
}


QString sneak::get(){
    QString res="";
    int x_=x-200;
    int y_=y-150;
    if(x_>0){
        while(x_>0){
            int tmp=x_%10;
            res=(tmp+'0')+res;
            x_=x_/10;
        }
    }
    else if(x_==0){
        res=res+'0';
    }
    else{
        x_=-x_;
        while(x_>0){
            int tmp=x_%10;
            res=(tmp+'0')+res;
            x_=x_/10;
        }
        res='-'+res;
    }
    res.append(',');
    QString ys="";
    if(y_>0){
        while(y_>0){
            int tmp=y_%10;
            ys=(tmp+'0')+ys;
            y_=y_/10;
        }
    }
    else if(y_==0){
        ys=ys+'0';
    }
    else{
        y_=-y_;
        while(y_>0){
            int tmp=y_%10;
            ys=(tmp+'0')+ys;
            y_=y_/10;
        }
        ys='-'+ys;
    }
    res=res+ys;
    return res;
}
