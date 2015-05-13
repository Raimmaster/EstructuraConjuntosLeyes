#ifndef NLEGISLADORES_H
#define NLEGISLADORES_H

#include <iostream>

class NLegisladores
{
public:
    int id;
    NLegisladores* siguiente;
    bool isBueno;
    NLegisladores(int id);
};

#endif // NLEGISLADORES_H
