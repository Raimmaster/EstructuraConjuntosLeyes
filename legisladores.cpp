#include "legisladores.h"
#include "ui_legisladores.h"

Legisladores::Legisladores(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Legisladores)
{
    ui->setupUi(this);
}

Legisladores::~Legisladores()
{
    delete ui;
}

void Legisladores::on_bCrear_clicked()
{
    QString q = ui->tLey->text();
    bool isBuena = ui->cbBuena->isChecked();

    ui->tLey->clear();

    leyes.push_back(new Ley(q, isBuena));
    ui->lwLeyes->addItem(q);
}

void Legisladores::on_bInsertar_clicked()
{
    int id = ui->tId->text().toInt();
    ui->tId->clear();

    QString q = QString("%1").arg(id);
    legisladores.insertar(new NLegisladores(id));
    ui->lwLegis->addItem(q);
}

int Legisladores::getPosInListOne(int id){
    int pos = -1;

    for(int i = 0; i < ui->lwLegis->count(); i++){
        if(ui->lwLegis->item(i)->text().toInt() == id)
            return i;
    }
    return pos;
}

void Legisladores::on_bSuprimir_clicked()
{
    int id = ui->tId->text().toInt();
    ui->tId->clear();

    legisladores.suprimir(id);
    legisladoresBuenos.suprimir(id);
    legisladoresMalos.suprimir(id);

    int posD = getPosInListOne(id);

    if(posD != -1)
        ui->lwLegis->takeItem(posD);

}

void Legisladores::on_bIsMember_clicked()
{
    int id = ui->tId->text().toInt();
    ui->tId->clear();

    int nCon = ui->tConj->text().toInt();
    ui->tConj->clear();

    bool isMember = false;

    switch(nCon){
        case 0:
            isMember = legisladores.isMiembro(id);
            break;
        case 1:
            isMember = legisladoresBuenos.isMiembro(id);
            break;
        case 2:
            isMember = legisladoresMalos.isMiembro(id);
            break;
    }

    QMessageBox qM;

    if(isMember)
        qM.setText("Si es miembro.");
    else
        qM.setText("No es miembro");

    qM.exec();
}

void Legisladores::on_bAprobar_clicked()
{
    int id = ui->lwLegis->currentItem()->text().toInt();
}
