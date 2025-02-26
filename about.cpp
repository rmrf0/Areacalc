#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::about)
{
    ui->setupUi(this);
    setWindowTitle("关于");
    setMaximumSize(375,177);
    setMinimumSize(375,177);
}

about::~about()
{
    delete ui;
}
