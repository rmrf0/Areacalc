#include "cylinder_s.h"
#include "ui_cylinder_s.h"
#include <QMessageBox>
cylinder_s::cylinder_s(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cylinder_s)
{
    ui->setupUi(this);
    setWindowTitle("圆柱表面积计算");
    setMaximumSize(260,160);
    setMinimumSize(260,160);
    ui->spinBox->setValue(2);
}

cylinder_s::~cylinder_s()
{
    delete ui;
}

void cylinder_s::on_pushButton_clicked()
{
    QString h = ui->lineEdit_h->text();
    QString r = ui->lineEdit_r->text();
    float hh = h.toFloat();
    float rr = r.toFloat();
    float face = ui->spinBox->value();
    float s = rr * rr * 3.14;
    float ss = s * 2 + 2 * rr * 3.14 * hh;
    if (ss <= 0)
    {
        QMessageBox::critical(this,"错误","表面积为0!!!");
    }
    else
    {
        if (face == 2)
        {
            float sss = ss;
            QString out = QString::number(sss);
            QMessageBox::information(this,"表面积","圆柱的表面积是: "+out);
        }
        else if(face == 1)
        {
            float sss = ss - s;
            QString out = QString::number(sss);
            QMessageBox::information(this,"表面积","圆柱的表面积是: "+out);
        }
        else if(face == 0)
        {
            float sss = ss - 2 * s;
            QString out = QString::number(sss);
            QMessageBox::information(this,"表面积","圆柱的表面积是: "+out);
        }
    }
}
