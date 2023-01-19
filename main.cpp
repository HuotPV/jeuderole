#include "Personnage.hpp"
#include "Guerrier.hpp"
#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
    Personnage david("Toto"); // attention , david() ne fonctionne aps !
    Guerrier goliath;

    //Création de 2 objets de type Personnage : david et goliath
 
    david.afficherEtat();
    goliath.afficherEtat();


    return 0;
}