#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <iostream>

using namespace std;

class ItalianChef: public Chef
{
public:
    ItalianChef(string,int,int);
    void makePasta();
    string getName();
private:
    int jauhot;
    int vesi;
};

#endif // ITALIANCHEF_H
