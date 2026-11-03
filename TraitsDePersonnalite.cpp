#include "TraitsDePersonnalite.h"
#include <algorithm>
#include "Character.h"

std::vector<std::string> Personnalite = { "mefiant", "impetueux", "calme", "courageux", "empathiques" };

bool TraitsDePersonnalite::Verif(std::string userverif) {
	if (std::find(Personnalite.begin(), Personnalite.end(), userverif) == Personnalite.end()) {
		TraitsDePersonnalite::character->setpersonnalite(userverif);
		return true;
	} 
	else {
		return false;
	}
		
}