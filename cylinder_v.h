#ifndef CYLINDER_V_H
#define CYLINDER_V_H

#include <QWidget>

namespace Ui {
class cylinder_v;
}

class cylinder_v : public QWidget
{
    Q_OBJECT

public:
    explicit cylinder_v(QWidget *parent = nullptr);
    ~cylinder_v();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cylinder_v *ui;
};

#endif // CYLINDER_V_H
