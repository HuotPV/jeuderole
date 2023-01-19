#include "Personnage.hpp"
#include "Guerrier.hpp"
#include "Magicien.hpp"
#include <iostream>
#include <string>
 
using namespace std;
 
 
int main()
{
    Personnage david("David"); // attention , david() ne fonctionne aps !
    Guerrier goliath("Goliath"); // il reste que je ne sait pas construire un Guerrier ...
    Magicien magieMan("MagieMan");

    //Création de 2 objets de type Personnage : david et goliath
 
    david.afficherEtat();
    goliath.afficherEtat();
    magieMan.afficherEtat(); 

    david.coupDePoing(goliath);
    goliath.doubleCoupDePoing(magieMan);
    david.afficherEtat();
    goliath.afficherEtat();
    magieMan.afficherEtat();

    return 0;
}