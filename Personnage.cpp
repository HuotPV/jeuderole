#include "Personnage.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

Personnage::Personnage() : m_nom("Sans nom"), m_vie(100){}
Personnage::Personnage(string nom) : m_nom(nom), m_vie(100){}

void Personnage::afficherEtat() const
{
    cout << m_nom << " a " << m_vie << " points de vie." << endl;
}
string Personnage::getNom() const
{
    return m_nom;
}
int Personnage::getVie() const
{
    return m_vie;
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }

    cout << m_nom << " perd " << nbDegats << " PV." << endl;
}

void Personnage::coupDePoing(Personnage &cible) const
{
    cible.recevoirDegats(10);
}
