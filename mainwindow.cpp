#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QBoxLayout>
#include <QMessageBox>
#include <QPainter>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setFixedSize(430,360);
    ja=jr=false;
    robot=new sneak;
    labelr=new QLabel(tr("R"));
    lineEditr=new QLineEdit;
    labelr->setBuddy(lineEditr);

    labela=new QLabel(tr("Angle"));
    lineEdita=new QLineEdit;
    labela->setBuddy(lineEdita);

    button=new QPushButton(tr("Go"));
    button->setDefault(true);
    button->setEnabled(false);

    showbutton=new QPushButton(tr("Show &Location"));
    button->setDefault(true);
    button->setEnabled(true);

    connect(lineEdita,SIGNAL(textChanged(const QString&)),this,SLOT(geta(const QString&)));
    connect(lineEditr,SIGNAL(textChanged(const QString&)),this,SLOT(getr(const QString&)));

    connect(button,SIGNAL(clicked(bool)),this,SLOT(enableGo()));
    connect(showbutton,SIGNAL(clicked(bool)),this,SLOT(showlocation()));

    QWidget *bar=new QWidget();
    this->setCentralWidget(bar);

    QHBoxLayout *menubar=new QHBoxLayout;
    menubar->addWidget(labelr);
    menubar->addWidget(lineEditr);
    menubar->addWidget(labela);
    menubar->addWidget(lineEdita);
    menubar->addWidget(button);
    menubar->addWidget(showbutton);

    QVBoxLayout *mainLayout=new QVBoxLayout;
    mainLayout->addLayout(menubar);
    mainLayout->addWidget(robot);

    centralWidget()->setLayout(mainLayout);
}

MainWindow::~MainWindow()
{
}
void MainWindow::startMove(){

}

void MainWindow::enableGo(){
    int r=lineEditr->text().toInt();
    double angle=lineEdita->text().toDouble();
    robot->move(r,angle);
}

void MainWindow::showlocation(){
    QMessageBox::about(NULL, "About", robot->get());
}

void MainWindow::getr(const QString& text){
    if(!text.isEmpty()) jr=true;
    else jr=false;
    if(jr&&ja){
        button->setEnabled(true);
    }
    else{
        button->setEnabled(false);
    }
}

void MainWindow::geta(const QString& text){
    if(!text.isEmpty())ja=true;
    else ja=false;
    if(jr&&ja){
        button->setEnabled(true);
    }
    else{
        button->setEnabled(false);
    }
}
