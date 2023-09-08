#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>

using namespace std;

class Kerros
{
public:
    Kerros();
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KERROS_H
