#ifndef LEGISLADORES_H
#define LEGISLADORES_H

#include <QMainWindow>
#include "Conjunto.h"
#include <QMessageBox>
#include <vector>
#include <Ley.h>

using namespace std;

namespace Ui {
class Legisladores;
}

class Legisladores : public QMainWindow
{
    Q_OBJECT

public:
    explicit Legisladores(QWidget *parent = 0);
    Conjunto legisladores, legisladoresBuenos, legisladoresMalos;
    vector<Ley> ley;
    void unirBuenosLegisladores();
    ~Legisladores();

private:
    Ui::Legisladores *ui;
};

#endif // LEGISLADORES_H
