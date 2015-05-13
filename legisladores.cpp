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

