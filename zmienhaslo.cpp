#include "zmienhaslo.h"
#include "ui_zmienhaslo.h"

ZmienHaslo::ZmienHaslo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZmienHaslo)
{
    ui->setupUi(this);
}

ZmienHaslo::~ZmienHaslo()
{
    delete ui;
}
