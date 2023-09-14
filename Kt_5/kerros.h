#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>

using namespace std;

class Kerros
{
public:
    Kerros();
    ~Kerros();
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
    virtual void maaritaAsunnot(); //Tässä kerrostalo luokassa molemmat metodit on määritetty virtuaalisiksi, koska molemmat toimivat eri
    virtual double laskeKulutus(double);//tavalla tuolla katutaso luokassa.
};

#endif // KERROS_H
