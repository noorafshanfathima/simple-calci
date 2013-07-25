#include <QtGui/QApplication>
#include "widget.h"
#include<iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    return a.exec();
}
fsmk@fsmk-ThinkCentre-M71e:~/calci$ cat widget.h
#ifndef WIDGET_H
#define WIDGET_H
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QRadioButton>
#include<iostream>

#include <QtGui/QWidget>

class Widget : public QWidget
{
    Q_OBJECT

private:
    int op;
    float ans,var1,var2,var3;
    QLabel *label1;
    QLineEdit *Line1;
    QPushButton *Push1;
    QPushButton *Push2;
    QPushButton *Push3;
    QPushButton *Push4;
    QPushButton *Push5;
    QPushButton *Push6;
    QPushButton *Push7;
    QPushButton *Push8;
    QPushButton *Push9;
    QPushButton *Push10;
    QPushButton *Push11;
    QPushButton *Push12;
    QPushButton *Push13;
    QPushButton *Push14;
    QPushButton *Push15;
    QPushButton *Push16;
    QPushButton *Push17;
    QPushButton *Push18;
    QPushButton *Push19;
    QPushButton *Push20;
    QRadioButton *Radio1;
    QRadioButton *Radio2;
    QHBoxLayout *Hbline1;
    QHBoxLayout *Hbpush1;
    QHBoxLayout *Hbpush2;
    QHBoxLayout *Hbpush3;
    QHBoxLayout *Hbpush4;
    QHBoxLayout *Hbradio1;
    QVBoxLayout *Vb;
    QLabel *Output;
    void Push();


private slots:



    void one()
    {
        Line1->setText(Line1->text()+"1");
    }

    void two()
    {
        Line1->setText(Line1->text()+"2");
    }

    void three()
    {
        Line1->setText(Line1->text()+"3");
    }

    void four()
    {
        Line1->setText(Line1->text()+"4");
    }

    void five()
    {
        Line1->setText(Line1->text()+"5");
    }

    void six()
    {
        Line1->setText(Line1->text()+"6");
    }

    void seven()
    {
        Line1->setText(Line1->text()+"7");
    }

    void eight()
    {
        Line1->setText(Line1->text()+"8");
    }

    void nine()
    {
        Line1->setText(Line1->text()+"9");
    }

    void zero()
    {
        Line1->setText(Line1->text()+"0");
    }

    void dot()
    {
        Line1->setText(Line1->text()+".");
    }

    void equal()
    {

        var2 = Line1->text().toInt();
        QString s;
        Line1->setText("12");

        switch(op)
        {
         case 0: ans=var1+var2;
                 Line1->setText(QString::number(ans));
                 break;
         case 1: ans=var1*var2;
                 Line1->setText(QString::number(ans));
                 break;
         case 2: ans=var1-var2;
                 Line1->setText(QString::number(ans));
                 break;
         case 3: ans=var1/var2;
                 Line1->setText(QString::number(ans));
                 break;

        }

    }

    void plus()
    {
        //Line1-> setText(Line1->text()+"+");
        var1 = Line1->text().toInt();
        op=0;
        Line1->clear();


    }

    void star()
    {
        //Line1->setText(Line1->text()+"*");
        var1= Line1->text().toInt();
        op=1;
        Line1->clear();
    }

    void minus()
    {
        //Line1->setText(Line1->text()+"-");
        var1=Line1->text().toInt();
        op=2;
        Line1->clear();

    }

    void divide()
    {
        //Line1->setText(Line1->text()+"/");
        var1=Line1->text().toInt();
        op=3;
        Line1->clear();
    }

    void mod()
    {
        Line1->setText(Line1->text()+"%Claculate Yourself%");

    }

    void backspace()
    {
        Line1->backspace();

    }

    void on()
    {
        Line1->setText(Line1->text()+"Welcome");


    }
    void clr()
    {
        Line1->clear();

     }

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
