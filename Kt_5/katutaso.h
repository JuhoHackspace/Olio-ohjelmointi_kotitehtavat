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
    ~Katutaso();
    Asunto* as1;
    Asunto* as2;
    virtual void maaritaAsunnot() override; //Tässä määritetään kerroksen asuntojen lisäksi kaksi asuntoa katutasosta, siksi override
    virtual double laskeKulutus(double) override; //Täällä lasketaan kerroksen asuntojen lisäksi kulutus kahdesta katutason asunnosta, siksi override
};

#endif // KATUTASO_H
