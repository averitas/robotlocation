class sneak:
    move: change x and y according to input r and angle
    get: return x and y in type QString
    print:draw the point

class MainWindow:
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