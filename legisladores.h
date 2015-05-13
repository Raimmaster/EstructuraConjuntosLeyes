#ifndef LEGISLADORES_H
#define LEGISLADORES_H

#include <QMainWindow>

namespace Ui {
class Legisladores;
}

class Legisladores : public QMainWindow
{
    Q_OBJECT

public:
    explicit Legisladores(QWidget *parent = 0);
    ~Legisladores();

private:
    Ui::Legisladores *ui;
};

#endif // LEGISLADORES_H
