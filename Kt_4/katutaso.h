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
    double laskeKulutus(double);
};

#endif // KATUTASO_H
