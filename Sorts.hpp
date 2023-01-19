#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

class Sorts
{
    public:

    Sorts();
    Sorts(std::string nom, int degats, int cout);
    void changer(std::string nom, int degats, int cout);
    void afficher() const;
    int getDegats() const;
    int getCout() const; 
    std::string getNom() const;

    private:
    std::string m_nom;
    int m_degats;
    int m_cout;
};

#endif