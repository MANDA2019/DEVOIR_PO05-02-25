#include <iostream>
#include "Complexe.h"
#include "Rationnel.h"

using namespace Isa;

int main()
{
    Complexe x(1,2);
    Complexe y(3,4);
    Complexe add = x.soustraction(y);
    add.affichage();    







    return(0);
}


