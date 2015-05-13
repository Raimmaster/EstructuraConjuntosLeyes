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
    vector<Ley*> leyes;
    void unirBuenosLegisladores();
    ~Legisladores();

private slots:
    void on_bCrear_clicked();

    void on_bInsertar_clicked();

    void on_bSuprimir_clicked();

    void on_bIsMember_clicked();

    void on_bAprobar_clicked();

private:
    Ui::Legisladores *ui;
};

#endif // LEGISLADORES_H
