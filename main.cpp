#include "legisladores.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Legisladores w;
    w.show();

    return a.exec();
}
