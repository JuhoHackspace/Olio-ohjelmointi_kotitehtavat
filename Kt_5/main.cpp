#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    //Tässä luodaan vain kerrostalo, joka määrittelee katutason sekä kerrokset automaattisesti konstruktorissa. Asukasmäärä ja neliöt on suoraan
    //laitettu tuonne luokkarakenteiden sisään Asunto::maarita metodin parametreiksi, kun sitä ei erikseen pyydetty antamaan parametrina
    //lopulliseen kerrostaloon, vaikka olisi se niinkin onnistunut. Olisin kokenut mielekkääksi ns. pudottaa sen asukasmäärän ja neliöt
    //rakenteiden läpi täältä ylhäältä, samoin kuin tuon hinnan, ja silloin ei olisi ollut kovakoodattuja parametrejä rakenteissa.
    //En viitsinyt poiketa tehtävänannosta.
    //Kerrostalo::laskeKulutus palauttaa myös kulutuksen doublena, mutta se myös printtaa sen suoraan joten sillä mentiin. Mukava tehtävä!

    //ps. Minulla oli tämän projektin kanssa joku ongelma tuon terminaalin tulostuksen kanssa, se toimii kerran, jonka jälkeen saattaa
    //tulostaa mitä sattuu. Jos näin käy, saat oikean tulostuksen kun otat Run->Run in terminal pois.
    //Toivottavasti ongelma oli vain täällä päässä!

    Kerrostalo* kt = new Kerrostalo;
    kt->laskeKulutus(1.0);
    delete kt; //Loin luokille destructorit, joissa nämä heapista varatut kerrostalo, kerrokset, katutasot ja asunnot vapautetaan delete käskyllä
    return 0;
}
