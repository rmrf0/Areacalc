#include "widget.h"
#include "./ui_widget.h"
#include "cirque.h"
#include "triangle.h"
#include "cylinder_s.h"
#include "about.h"
#include "cylinder_v.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("多功能计算器");
    setMaximumSize(260,190);
    setMinimumSize(260,190);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    yuan_s *yuan = new yuan_s;
    yuan->setWindowModality(Qt::ApplicationModal);
    yuan->show();
}


void Widget::on_pushButton_2_clicked()
{
    triangle *triangle_ = new triangle;
    triangle_->setWindowModality(Qt::ApplicationModal);
    triangle_->show();
}

void Widget::on_pushButton_4_clicked()
{
    cylinder_s *cylinder__s = new cylinder_s;
    cylinder__s->setWindowModality(Qt::ApplicationModal);
    cylinder__s->show();
}

void Widget::on_pushButton_3_clicked()
{
    about *about_ = new about;
    about_->setWindowModality(Qt::ApplicationModal);
    about_->show();
}

void Widget::on_pushButton_5_clicked()
{
    cylinder_v *cylinder_v_ = new cylinder_v;
    cylinder_v_->setWindowModality(Qt::ApplicationModal);
    cylinder_v_->show();
}

