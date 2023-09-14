#include "katutaso.h"

Katutaso::Katutaso()
{
    as1 = new Asunto;
    as2 = new Asunto;
    cout << "Katutaso luotu. Katutason ja perityn kerroksen asunnot varattu heap muistista" << endl;
}
Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
    cout << "Katutason asunnot 1 ja 2 vapautettu heap muistista" << endl;
}
void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}
double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += Kerros::laskeKulutus(hinta);
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    return kulutus;
}
