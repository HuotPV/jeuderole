#include "Guerrier.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

Guerrier::Guerrier() : Personnage(){} // constructeur par defaut de Guerrier = appeler le constructeur par defaut de Personnage
Guerrier::Guerrier(string nom) : Personnage(nom) {}


void Guerrier::doubleCoupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(20);
}

void Guerrier::afficherEtat() const
{
    cout << m_nom << " a " << m_vie << " points de vie, mais c'est un guerrier !" << endl;
    /* Guerrier a le droit d'utiliser les attributes m_nom et m_vie définis dans la classe mère Personnage, 
    car ces derniers sont désormais "protected", et non plus private */
}