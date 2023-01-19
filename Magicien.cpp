#include "Magicien.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

Magicien::Magicien() : Personnage(), m_mana(100){}
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