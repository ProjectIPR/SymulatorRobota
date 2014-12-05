#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class OknoOperatora;
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    OknoOperatora *oknoOperatora;
};

#endif // MAINWINDOW_H
