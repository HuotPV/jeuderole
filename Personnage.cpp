#include "Personnage.hpp" // ATTENTION ! Ici ce sont des "" et pas des <>
#include <iostream>
#include <string>
 
using namespace std;  // je crois que c'est OK d'utiliser le namespace std ici, c'est juste dans les headers que ce n'est pas bien
 

Personnage::Personnage() : m_nom("Sans nom"), m_vie(100), m_mana(100), m_arme() // ici, m_arme() appelle le constructeur de la classe Arme !
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nom(nom), m_vie(100), m_mana(100), m_arme(nomArme,degatsArme)
{
}

Personnage::Personnage(string nom, string nomArme, int degatsArme, string nomSorts, int degatsSorts, int coutSorts) : m_nom(nom), m_vie(100), m_mana(100), m_arme(nomArme,degatsArme), m_sorts(nomSorts,degatsSorts,coutSorts)
{
}

Personnage::Personnage(string nom, Personnage const &autre) : m_nom(nom), m_vie(autre.m_vie), m_mana(autre.m_mana), m_arme(autre.m_arme), m_sorts(autre.m_sorts)
{
}

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;

    if (m_vie < 0)
    {
        m_vie = 0;
    }

    cout << m_nom << " perds " << nbDegats << " PV." << endl;
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;

    if (m_vie > 100)
    {
        m_vie = 100;
    }

    cout << m_nom << " boit une potion et a maintenant " << m_vie << " PV !" << endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
    m_arme.changer(nomNouvelleArme,degatsNouvelleArme);

    cout << m_nom << " utilise une nouvelle arme:" << endl;
    m_arme.afficher();
}

void Personnage::changerSorts(string nomNouveauSort, int degatsNouveauSort,int coutNouveauSort)
{
    m_sorts.changer(nomNouveauSort,degatsNouveauSort,coutNouveauSort);

    cout << m_nom << " utilise une nouvelle arme:" << endl;
    m_sorts.afficher();
}


void Personnage::attaquer(Personnage &cible)
{
    cout << m_nom << " attaque " << cible.getNom() << " !" << endl;
    cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::lancerSorts(Personnage &cible)
{
    if (m_sorts.getNom() != "None")
    {
        cout << m_nom << " lance un sort de " << m_sorts.getNom() << " sur " << cible.getNom() << " !" << endl;
        cible.recevoirDegats(m_sorts.getDegats());
        m_mana -= m_sorts.getCout();
    }
    else
    {
        cout << m_nom << " ne connait pas de sort !" << endl;
    }

}



string Personnage::getNom()
{
    return m_nom;
}
string Personnage::getArme()
{
    return m_arme.getNom();
}

int Personnage::getVie()
{
    return m_vie;
}

bool Personnage::estVivant() const
{
    bool vivant = true;
    
    /*if (m_vie > 0)
    {
        vivant = true;
    }
    else
    {
        vivant = false;
    }
    
    return vivant;
    */

    // ou alors, beaucoup plus court ....

    return m_vie > 0;
}

void Personnage::afficherEtat()
{
    cout << m_nom << endl;
    cout << "Points de vie: " << m_vie << endl;
    cout << "Points de mana: " << m_mana << endl;
    cout << "Arme: " << endl;
    m_arme.afficher();
    cout << "Sorts:" << endl;
    m_sorts.afficher();
    
}