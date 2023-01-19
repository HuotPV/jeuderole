#include "Arme.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>

using namespace std;

Arme::Arme() : m_nom("Epee rouillee"), m_degats(10)
{
}
Arme::Arme(std::string nom, int degats) : m_nom(nom), m_degats(degats)
{
}

void Arme::changer(std::string nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
}

string Arme::getNom()
{
    return m_nom;
}

int Arme::getDegats() const
{
    return m_degats;
}

void Arme::afficher() const
{
    cout << m_nom << " infligeant " << m_degats << " de dégats." << endl;
}
