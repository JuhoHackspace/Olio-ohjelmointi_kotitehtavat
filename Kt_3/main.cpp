#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    //Toivottavasti ei haittaa että muutin vähän tulostuksen ulkoasua. Nyt Mario käyttää ainesosia senttilitroina.
    //Ohjeista oli epäselvää, että mihin makePasta funktion kahta int parametria tulisi käyttää, kun ainesosat annetaan jo konstruktorissa,
    //siitä ei ollut mitään mainintaa.
    //Tai että oliko reseptejä kaksi: "oma salainen" ja "isoäidin salainen". Jos ymmärsin ohjeet jotenkin väärin, niin helpostiko tuon korjaa"
    //Toiminnallisuus pelaa kuitenkin oikein.

    ItalianChef chef("Mario",250,100);
    chef.makePasta();

    return 0;
}
