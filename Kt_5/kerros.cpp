#include "kerros.h"

Kerros::Kerros()
{
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
    cout << "Kerros luotu. Asunnot varattu heap muistista" << endl;
}
Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    cout << "Kerroksen asunnot 1,2,3 ja 4 vapautettu heap muistista" << endl;
}
void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}
double Kerros::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    kulutus += as3->laskeKulutus(hinta);
    kulutus += as4->laskeKulutus(hinta);
    return kulutus;
}
