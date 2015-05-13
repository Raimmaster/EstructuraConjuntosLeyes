#ifndef NLEGISLADORES_H
#define NLEGISLADORES_H

#include <iostream>

class NLegisladores
{
public:
    int id;
    NLegisladores* siguiente;
    bool isBueno;
    NLegisladores();
};

#endif // NLEGISLADORES_H
