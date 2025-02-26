#include "cirque.h"
#include "ui_cirque.h"

yuan_s::yuan_s(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::yuan_s)
{
    ui->setupUi(this);
    setWindowTitle("圆环面积计算");
    setMaximumSize(240,140);
    setMinimumSize(240,140);
}

yuan_s::~yuan_s()
{
    delete ui;
}

void yuan_s::on_pushButton_ok_clicked()
{
    QString r2 = ui->lineEdit_r2_2->text();
    QString r1 = ui->lineEdit_r1->text();
    float i2 = r2.toFloat();
    float i1 = r1.toFloat();
    float s = (i2 * i2 - i1 * i1)* 3.14;
    QString out = QString::number(s);
    if (s < 0)
    {
        QMessageBox::critical(this,"错误","ERROR(1):面积为负!!!");
    }
    else if (s == 0)
    {
        QMessageBox::critical(this,"错误","ERROR(2):面积为0!!!");
    }
    else
    {
        QMessageBox::information(this,"面积","用圆环面积是:"+out);
    }
}

