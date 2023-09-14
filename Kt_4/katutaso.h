#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
#include <iostream>

using namespace std;

class Katutaso: public Kerros
{
public:
    Katutaso();
    Asunto as1;
    Asunto as2;
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double) override;
};

#endif // KATUTASO_H
