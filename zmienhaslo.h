#ifndef ZMIENHASLO_H
#define ZMIENHASLO_H

#include <QWidget>

namespace Ui {
    class ZmienHaslo;
}

class ZmienHaslo : public QWidget
{
    Q_OBJECT

public:
    explicit ZmienHaslo(QWidget *parent = 0);
    ~ZmienHaslo();

private:
    Ui::ZmienHaslo *ui;
};

#endif // ZMIENHASLO_H
