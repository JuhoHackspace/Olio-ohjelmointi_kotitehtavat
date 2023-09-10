#include "chef.h"

Chef::Chef(string name): name(name)
{
    cout << "Chef " << this->name << " konstruktori" << endl;
}
void Chef::makeSalad()
{
    cout << "Chef " << this->name << " makes salad" << endl;
}
void Chef::makeSoup()
{
    cout << "Chef " << this->name << " makes soup" << endl;
}
Chef::~Chef()
{
    cout << "Chef " << this->name << " destructor" << endl;
}
