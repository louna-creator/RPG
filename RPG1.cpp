

#include <iostream>
#include "Character.h"
#include "TraitsDePersonnalite.h"

int main()
{
    std::string name = "";
    Character Character;
    std::cout << "Choisissez un nom\n";
    std::cin >> name;
    Character.setname(name);

    std::cout << Character.getname();

    int taille = 0;
    std::cout << "\nQuel est votre taille ?\n";
    std::cin >> taille;
    Character.settaille(taille);

    int poids = 0;
    std::cout << "Quel est votre poids ?\n";
    std::cin >> poids;
    Character.setpoids(poids);

    TraitsDePersonnalite TraitsDePersonnalite;
    std::string Personnalite = "";
    std::cout << "Choisissez votre personnalite\n";
    std::cin >> Personnalite;
    TraitsDePersonnalite.Verif(Personnalite);
}

