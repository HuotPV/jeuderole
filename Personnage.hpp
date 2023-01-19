#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include "Arme.hpp"
#include "Sorts.hpp"

class Personnage
{
    public:

    Personnage(); //constructeur
    Personnage(std::string nom,std::string nomArme, int degatsArme); // surcharge du constructeur
    Personnage(std::string nom,std::string nomArme, int degatsArme, std::string nomSorts, int degatsSorts, int coutSorts); // surcharge du constructeur
    Personnage(std::string nom, Personnage const& autre); // constructeur de copie

    void recevoirDegats(int nbDegats); // Ici on ne garde que le prototype des méthodes.
    void attaquer(Personnage &cible);
    void lancerSorts(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    void changerSorts(std::string nomNouveauSort, int degatsNouveauSort, int coutNouveauSort);
    bool estVivant() const;
    void afficherEtat();
    std::string getNom();
    std::string getArme();
    int getVie();

    private:

    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;    
    Sorts m_sorts; 
};


#endif // PERSONNAGE_H_INCLUDED