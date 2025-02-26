#ifndef CYLINDER_S_H
#define CYLINDER_S_H

#include <QWidget>

namespace Ui {
class cylinder_s;
}

class cylinder_s : public QWidget
{
    Q_OBJECT

public:
    explicit cylinder_s(QWidget *parent = nullptr);
    ~cylinder_s();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cylinder_s *ui;
};

#endif // CYLINDER_S_H
