#ifndef ASUNTO_H
#define ASUNTO_H

#include <iostream>

using namespace std;

class Asunto
{
public:
    int asukasMaara;
    int neliot;
    Asunto();
    void maarita(int,int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
