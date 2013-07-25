#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    label1 = new QLabel();
    Line1  = new QLineEdit();
    Push1 = new QPushButton("7");
    Push2 = new QPushButton("8");
    Push3 = new QPushButton("9");
    Push4 = new QPushButton("CLR");
    Push5 = new QPushButton("on");
    Push6 = new QPushButton("4");
    Push7 = new QPushButton("5");
    Push8 = new QPushButton("6");
    Push9 = new QPushButton("%");
    Push10 = new QPushButton("off");
    Push11 = new QPushButton("1");
    Push12 = new QPushButton("2");
    Push13 = new QPushButton("3");
    Push14= new QPushButton("-");
    Push15 = new QPushButton("/");
    Push16 = new QPushButton("0");
    Push17 = new QPushButton(".");
    Push18 = new QPushButton("=");
    Push19 = new QPushButton("+");
    Push20 = new QPushButton("*");
    Radio1 = new QRadioButton("Simple");
    Radio2 = new QRadioButton("Scientific");
    Hbline1 = new QHBoxLayout();
    Hbline1->addWidget(Line1);
    Vb = new QVBoxLayout();
    Vb->addLayout(Hbline1);

    Hbpush1 = new QHBoxLayout();
    Hbpush1->addWidget(Push1);
    Hbpush1->addWidget(Push2);
    Hbpush1->addWidget(Push3);
    Hbpush1->addWidget(Push4);
    Hbpush1->addWidget(Push5);
    Vb->addLayout(Hbpush1);
    Hbpush2 = new QHBoxLayout();
    Hbpush2->addWidget(Push6);
    Hbpush2->addWidget(Push7);
    Hbpush2->addWidget(Push8);
    Hbpush2->addWidget(Push9);
    Hbpush2->addWidget(Push10);
    Vb->addLayout(Hbpush2);
    Hbpush3 = new QHBoxLayout();
    Hbpush3->addWidget(Push11);
    Hbpush3->addWidget(Push12);
    Hbpush3->addWidget(Push13);
    Hbpush3->addWidget(Push14);
    Hbpush3->addWidget(Push15);
    Vb->addLayout(Hbpush3);
    Hbpush4 = new QHBoxLayout();
    Hbpush4->addWidget(Push16);
    Hbpush4->addWidget(Push17);
    Hbpush4->addWidget(Push18);
    Hbpush4->addWidget(Push19);
    Hbpush4->addWidget(Push20);
    Vb->addLayout(Hbpush4);
    Hbradio1 = new QHBoxLayout;
    Hbradio1->addWidget(Radio1);
    Hbradio1->addWidget(Radio2);
    Vb->addLayout(Hbradio1);
    QObject::connect(Push11,SIGNAL(clicked()),this,SLOT(one()));
    QObject::connect(Push12,SIGNAL(clicked()),this,SLOT(two()));
    QObject::connect(Push13,SIGNAL(clicked()),this,SLOT(three()));
    QObject::connect(Push6,SIGNAL(clicked()),this,SLOT(four()));
    QObject::connect(Push7,SIGNAL(clicked()),this,SLOT(five()));
    QObject::connect(Push8,SIGNAL(clicked()),this,SLOT(six()));
    QObject::connect(Push1,SIGNAL(clicked()),this,SLOT(seven()));
    QObject::connect(Push2,SIGNAL(clicked()),this,SLOT(eight()));
    QObject::connect(Push3,SIGNAL(clicked()),this,SLOT(nine()));
    QObject::connect(Push16,SIGNAL(clicked()),this,SLOT(zero()));
    QObject::connect(Push17,SIGNAL(clicked()),this,SLOT(dot()));
    QObject::connect(Push18,SIGNAL(clicked()),this,SLOT(equal()));
    QObject::connect(Push19,SIGNAL(clicked()),this,SLOT(plus()));
    QObject::connect(Push20,SIGNAL(clicked()),this,SLOT(star()));
    QObject::connect(Push14,SIGNAL(clicked()),this,SLOT(minus()));
    QObject::connect(Push15,SIGNAL(clicked()),this,SLOT(divide()));
    QObject::connect(Push9,SIGNAL(clicked()),this,SLOT(mod()));
    QObject::connect(Push4,SIGNAL(clicked()),this,SLOT(clr()));
    QObject::connect(Push5,SIGNAL(clicked()),this,SLOT(on()));
    QObject::connect(Push10,SIGNAL(clicked()),this,SLOT(off()));



    setLayout(Vb);
    Output = new QLabel;





}

Widget::~Widget()
{
    
}

void Widget::Push()
{
}
