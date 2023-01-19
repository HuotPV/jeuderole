#include "Magicien.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

Magicien::Magicien() : Personnage(), m_mana(100){} // Constructeur par defaut de Magicien = constructeur par defaut de Personnage + declaration de l'attribut m_mana
Magicien::Magicien(string nom) : Personnage(nom), m_mana(100){}

void Magicien::bouleDeFeu(Personnage &cible)
{
    cible.recevoirDegats(20);
    m_mana -= 40;
}

void Magicien::bouleDeGlace(Personnage &cible)
{
    cible.recevoirDegats(10);
    m_mana -= 10;
}

void Magicien::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(3);
}

void Magicien::afficherEtat() const
{
    cout << m_nom << " a " << m_vie << " points de vie, mais c'est un magicien !" << endl; 
    /* Magicien a le droit d'utiliser les attributes m_nom et m_vie définis dans la classe mère Personnage, 
    car ces derniers sont désormais "protected", et non plus private */
}