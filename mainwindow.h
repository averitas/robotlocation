#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sneak.h"
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QPaintEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected slots:
    void startMove();
    void enableGo();
    void showlocation();
    void getr(const QString& text);
    void geta(const QString& text);

signals:

private:
    Ui::MainWindow *ui;
    sneak *robot;
    QLineEdit *lineEditr;
    QLineEdit *lineEdita;
    QPushButton *button;
    QPushButton *showbutton;
    QLabel *labelr;
    QLabel *labela;
    bool jr;
    bool ja;
};

#endif // MAINWINDOW_H
