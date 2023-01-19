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
    Personnage::afficherEtat(); // demasquage de la methode afficherEtat de Personnage
    cout << "C'est un guerrier !" << endl; // ajout des spécificités de la classe Guerrier
}