#ifndef EDYCJADANYCH_H
#define EDYCJADANYCH_H

#include <QWidget>

namespace Ui {
    class EdycjaDanych;
}

class EdycjaDanych : public QWidget
{
    Q_OBJECT

public:
    explicit EdycjaDanych(QWidget *parent = 0);
    ~EdycjaDanych();

private:
    Ui::EdycjaDanych *ui;
};

#endif // EDYCJADANYCH_H
