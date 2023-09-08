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

    Kerrostalo kt;
    kt.laskeKulutus(1.0);
    return 0;
}
