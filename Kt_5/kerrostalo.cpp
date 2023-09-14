#include "kerrostalo.h"

Kerrostalo::Kerrostalo() //Määritin tässä konstruktorissa nämä katutason ja kerroksen asunnot, kun UML kaaviossa ei ollut erillistä funktiota sille
{
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    cout << "Kerrostalo luotu. Katutaso ja kerrokset varattu heap muistista" << endl;
    cout << "Maaritetaan koko kerrostalon kaikki asunnot." << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}
Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
    cout << "Katutaso seka kerrokset vapautettu heap muistista" << endl;
}
double Kerrostalo::laskeKulutus(double hinta) //Täältä printataan suoraan kulutus, vaikka se paluuarvona annetaankin
{
    double kulutus = 0.0;
    kulutus += eka->laskeKulutus(hinta);
    kulutus += toka->laskeKulutus(hinta);
    kulutus += kolmas->laskeKulutus(hinta);
    cout << "Kerrostalon kulutus, kun hinta on " << hinta << ", on " << kulutus << endl;
    return kulutus;
}
