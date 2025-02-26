#include "cylinder_v.h"
#include "ui_cylinder_v.h"
#include <QMessageBox>
cylinder_v::cylinder_v(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::cylinder_v)
{
    ui->setupUi(this);
    setWindowTitle("圆柱体积计算");
    setMinimumSize(225,125);
    setMaximumSize(225,125);
}

cylinder_v::~cylinder_v()
{
    delete ui;
}

void cylinder_v::on_pushButton_clicked()
{
    QString r = ui->lineEdit_r->text();
    QString h = ui->lineEdit_h->text();
    float rr = r.toFloat();
    float hh = h.toFloat();
    float v = rr * rr * 3.14 * hh;
    if (v <= 0)
    {
        QMessageBox::critical(this,"错误","结果为\"0\"");
    }
    else
    {
        QString out = QString::number(v);
        QMessageBox::information(this,"体积","圆柱体积是:" + out);
    }
}

