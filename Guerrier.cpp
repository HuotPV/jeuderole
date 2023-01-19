#include "Guerrier.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

void Guerrier::doubleCoupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(20);
}
