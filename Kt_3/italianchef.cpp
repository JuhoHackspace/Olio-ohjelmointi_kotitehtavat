#include "italianchef.h"

ItalianChef::ItalianChef(string name, int jauhot, int vesi):Chef(name),jauhot(jauhot),vesi(vesi)
{
    cout << "Chef " << this->name << " konstruktori" << endl;
}
string ItalianChef::getName()
{
    return this->name;
}
void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << " uses " << this->jauhot << " ml of flour" << endl;
    cout << "Chef " << getName() << " uses " << this->vesi << " ml of water" << endl;
}
