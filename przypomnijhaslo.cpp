#include "przypomnijhaslo.h"
#include "ui_przypomnijhaslo.h"

PrzypomnijHaslo::PrzypomnijHaslo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PrzypomnijHaslo)
{
    ui->setupUi(this);
}

PrzypomnijHaslo::~PrzypomnijHaslo()
{
    delete ui;
}
