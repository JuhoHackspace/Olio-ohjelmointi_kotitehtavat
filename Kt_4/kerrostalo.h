#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"
#include <iostream>

using namespace std;

class Kerrostalo
{
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
public:
    Kerrostalo();
    double laskeKulutus(double);
};

#endif // KERROSTALO_H
