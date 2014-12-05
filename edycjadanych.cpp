#include "edycjadanych.h"
#include "ui_edycjadanych.h"

EdycjaDanych::EdycjaDanych(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EdycjaDanych)
{
    ui->setupUi(this);
}

EdycjaDanych::~EdycjaDanych()
{
    delete ui;
}
