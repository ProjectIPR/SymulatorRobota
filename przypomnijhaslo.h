#ifndef PRZYPOMNIJHASLO_H
#define PRZYPOMNIJHASLO_H

#include <QWidget>

namespace Ui {
    class PrzypomnijHaslo;
}

class PrzypomnijHaslo : public QWidget
{
    Q_OBJECT

public:
    explicit PrzypomnijHaslo(QWidget *parent = 0);
    ~PrzypomnijHaslo();

private:
    Ui::PrzypomnijHaslo *ui;
};

#endif // PRZYPOMNIJHASLO_H
