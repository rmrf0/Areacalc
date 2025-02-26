#include "triangle.h"
#include "ui_triangle.h"
#include <cmath>
#include <QMessageBox>
triangle::triangle(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::triangle)
{
    ui->setupUi(this);
    setWindowTitle("三角形面积计算");
    setMaximumSize(277,169);
    setMinimumSize(277,169);
}

triangle::~triangle()
{
    delete ui;
}

void triangle::on_pushButton_clicked()
{
    QString l1 = ui->lineEdit_1->text();
    QString l2 = ui->lineEdit_2->text();
    QString l3 = ui->lineEdit_3->text();
    float ll1 = l1.toFloat();
    float ll2 = l2.toFloat();
    float ll3 = l3.toFloat();
    float p = (ll1 + ll2 + ll3) / 2;
    float s = sqrt(p * (p - ll1) * (p - ll2) * (p - ll3));
    QString out = QString::number(s);
    if (s <= 0)
    {
        QMessageBox::critical(this,"错误","ERROR(1):不构成三角形!!!");
    }
    else
    {
        QMessageBox::information(this,"面积","三角形面积是:"+out);
    }
}
