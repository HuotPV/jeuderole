#ifndef MAGICIEN_H_INCLUDED
#define MAGICIEN_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include "Personnage.hpp"

class Magicien : public Personnage  // créer une classe Magicien qui hérite de la classe personnage
{

    public:
    Magicien();
    Magicien(std::string nom);

    void bouleDeFeu(Personnage &cible);
    void bouleDeGlace(Personnage &cible);
    void coupDePoing(Personnage &cible) const; // ici, on "ecrase" la méthode coupDePoing de Personnage.

    private:

    int m_mana;


}; // pas oublier le ; ici


#endif // MAGICIEN_H_INCLUDED