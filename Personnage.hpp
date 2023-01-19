#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>


class Personnage
{
    public:

    Personnage(); //constructeur
    Personnage(std::string nom); // surcharge du constructeur

    void recevoirDegats(int nbDegats); // Ici on ne garde que le prototype des méthodes.
    void coupDePoing(Personnage &cible);

    private:
    int m_vie;
    std::string m_nom;
};


#endif // PERSONNAGE_H_INCLUDED