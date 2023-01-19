#include "Personnage.hpp"
#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
    int action, switchDavid(1), switchGoliath(1);
    Personnage david("David","Epee rouillee",10), goliath("Goliath","Epee pointue",20);
    //Création de 2 objets de type Personnage : david et goliath
 
    goliath.afficherEtat();
    david.afficherEtat();

    while (goliath.estVivant() and david.estVivant())
    {
        goliath.attaquer(david);

        cout << "Que voulez vous faire ?" << endl;
        cout << "1: attaquer, 2: potion, 3: sorts ?" << endl;
        cin >> action;

        switch(action)
        {
            case 1:
                david.attaquer(goliath);
                break;
            case 2:
                david.boirePotionDeVie(20);
                break;
            case 3:
                david.lancerSorts(goliath);
                break;
            default:
                cout << "ça ne fonctionne pas !" << endl;
                break;
        }

        david.afficherEtat();
        goliath.afficherEtat();

        if (switchDavid==1 and david.getVie() < 60)
        {
            david.changerSorts("Boule de feu",30,40);
            switchDavid = 0;
        }

        if (switchGoliath==1 and goliath.getVie() < 40)
        {
            david.changerArme("Hache de boureau",40);
            switchDavid = 0;
        }
  
    }

    if (goliath.estVivant())
    {
        cout << "David a succombé au dernier coup de " << goliath.getArme() << " de Goliath ..." << endl;
        cout << "Défaite !" << endl;
    }
    else
    {
        cout << "David est parvenu à terrasser Goliath !" << endl;
        cout << "Victoire !";
    }
 
    return 0;
}