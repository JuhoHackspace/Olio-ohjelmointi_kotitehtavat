#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}
void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}
double Kerros::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += as1.laskeKulutus(hinta);
    kulutus += as2.laskeKulutus(hinta);
    kulutus += as3.laskeKulutus(hinta);
    kulutus += as4.laskeKulutus(hinta);
    return kulutus;
}
