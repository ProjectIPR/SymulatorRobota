#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <oknooperatora.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    oknoOperatora = new OknoOperatora();
    oknoOperatora->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
