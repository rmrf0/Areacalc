#ifndef CIRQUE_H
#define CIRQUE_H

#include <QWidget>
#include <QMessageBox>
namespace Ui {
class yuan_s;
}

class yuan_s : public QWidget
{
    Q_OBJECT

public:
    explicit yuan_s(QWidget *parent = nullptr);
    ~yuan_s();

private slots:
    void on_pushButton_ok_clicked();

private:
    Ui::yuan_s *ui;
};

#endif // CIRQUE_H
