#include "kerrostalo.h"
#include <iostream>

using namespace std;

Kerrostalo::Kerrostalo() //Määritin tässä konstruktorissa nämä katutason ja kerroksen asunnot, kun UML kaaviossa ei ollut erillistä funktiota sille
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritetaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}
double Kerrostalo::laskeKulutus(double hinta) //Täältä printataan suoraan kulutus, vaikka se paluuarvona annetaankin
{
    double kulutus = 0.0;
    kulutus += eka.laskeKulutus(hinta);
    kulutus += toka.laskeKulutus(hinta);
    kulutus += kolmas.laskeKulutus(hinta);
    cout << "Kerrostalon kulutus, kun hinta on " << hinta << ", on " << kulutus << endl;
    return kulutus;
}
