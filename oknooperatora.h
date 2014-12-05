#ifndef OKNOOPERATORA_H
#define OKNOOPERATORA_H

#include <QMainWindow>

namespace Ui {
    class OknoOperatora;
}

class OknoOperatora : public QMainWindow
{
    Q_OBJECT

public:
    explicit OknoOperatora(QWidget *parent = 0);
    ~OknoOperatora();

private:
    Ui::OknoOperatora *ui;
};

#endif // OKNOOPERATORA_H
