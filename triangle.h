#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QWidget>
#include <cmath>

namespace Ui {
class triangle;
}

class triangle : public QWidget
{
    Q_OBJECT

public:
    explicit triangle(QWidget *parent = nullptr);
    ~triangle();

private slots:
    void on_pushButton_clicked();

private:
    Ui::triangle *ui;
};

#endif // TRIANGLE_H
