#include "Sorts.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

Sorts::Sorts() : m_nom("None"), m_degats(0), m_cout(0) // ici, m_arme() appelle le constructeur de la classe Arme !
{
}

Sorts::Sorts(string nom, int degats, int cout) : m_nom(nom), m_degats(degats), m_cout(cout)
{
}

string Sorts::getNom() const
{
    return m_nom;
}

void Sorts::afficher() const
{
    cout << m_nom << ", infligeant " << m_degats << " PV et coutant " << m_cout << endl;
}

void Sorts::changer(string nom, int degats, int cout)
{
    m_nom = nom;
    m_degats = degats;
    m_cout = cout;
}

int Sorts::getDegats() const
{
    return m_degats;
}

int Sorts::getCout() const
{
    return m_cout;
}
