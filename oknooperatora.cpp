#include "oknooperatora.h"
#include "ui_oknooperatora.h"

OknoOperatora::OknoOperatora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OknoOperatora)
{
    ui->setupUi(this);
}

OknoOperatora::~OknoOperatora()
{
    delete ui;
}
