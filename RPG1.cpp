

#include <iostream>
#include "Character.h"
#include "TraitsDePersonnalite.h"
#include "Race.h"

int main()
{
    Character Character;
    Race Race;
    TraitsDePersonnalite TraitsDePersonnalite;

    int Choice = 0;
    int userchoice = 0;

    bool game = true;

    while (game) {

        std::cout << "\nQue voulez vous consulter : 1 creer son personnage, \n 2 charger son personnage ?\n";
        std::cin >> userchoice;

        if (userchoice == 1) {
            std::cout << "\nCreer son personnage.\n";

            std::string name = "";
            std::cout << "\nChoisissez un nom\n";
            std::cin >> name;
            Character.setname(name);

            int taille = 0;
            std::cout << "\nQuel est votre taille ?\n";
            std::cin >> taille;
            Character.settaille(taille);

            int poids = 0;
            std::cout << "\nQuel est votre poids ?\n";
            std::cin >> poids;
            Character.setpoids(poids);

            
            std::string Personnalite = "";
            std::cout << "\nChoisissez votre personnalite, prenez les caracteristiques en choisissant entre  mefiant, \n impetueux, calme, courageux, empathique\n";
            std::cin >> Personnalite;
            
            if (TraitsDePersonnalite.Verif(Personnalite)) {
                std::cout << "vrai";
            }
            else {
                std::cout << "false";
            }

          
            std::string ChoiceRace = "";
            std::cout << "\nChoisissez votre Race, en choisissant entre  Nain, \nElfe, Humain, Fee, Orc\n";
            std::cin >> ChoiceRace;
            Race.Verif(ChoiceRace);

            //game = false;
        }

        if (userchoice == 2) {
            std::cout << "\nAfficher mon personnage\n";

            std::cout << Character.getname();
            std::cout << Character.gettaille();
            std::cout << Character.getpoids();
            std::cout << Character.getrace();
            std::cout << Character.getpersonnalite();

            game = false;
        }
        else {
            std::cout << "\nCette option est indisponible, veuillez en choisir une autre.\n";
        }

    }
}


