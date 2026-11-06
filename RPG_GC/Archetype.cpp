#include "Archetype.h"
#include <string>
#include "Character.h"
#include <algorithm>

std::string Epeiste::getepeiste() {
	return "epeiste";
}

std::string Mage::getmage() {
	return "mage";
}

std::string Guerrier::getguerrier() {
	return "guerrier";
}

std::string Voleur::getvoleur() {
	return "voleur";
}

std::string Guerisseur::getguerisseur() {
	return "guerisseur";
}

std::vector<std::string> ChoiceArchetype = { "epeiste", "mage", "guerrier", "voleur", "guerisseur" };

bool Archetype::Verif(std::string userverif) {
	if (std::find(ChoiceArchetype.begin(), ChoiceArchetype.end(), userverif) != ChoiceArchetype.end()) {
		Archetype::character->setarchetype(userverif);
		return false;
	}
	else {
		return true;
	}
}

