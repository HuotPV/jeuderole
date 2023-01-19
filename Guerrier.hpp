#ifndef GUERRIER_H_INCLUDED
#define GUERRIER_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include "Personnage.hpp"

class Guerrier : public Personnage  // créer une classe Guerrier qui hérite de la classe personnage
{

    public:

    void doubleCoupDePoing(Personnage &cible) const;


}; // pas oublier le ; ici


#endif // GUERRIER_H_INCLUDED