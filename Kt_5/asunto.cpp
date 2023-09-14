#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}
void Asunto::maarita(int as, int n)
{
    this->asukasMaara = as;
    this->neliot = n;
    cout << "Asunto maaritetty: asukkaita = " << this->asukasMaara << ", nelioita = " << this->neliot << endl;
}
double Asunto::laskeKulutus(double hinta)
{
    double kulutus = (double) (hinta * this->asukasMaara * this->neliot);
    return kulutus;
}
