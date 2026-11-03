#include "Race.h"

std::string Elfes::getname() {
	return "Elfes";
}
std::vector<std::string> Elfes::abilities() {
	return { "nyctalopie" };
}
std::vector<std::string> Elfes::forbiddenabilities() {
	return { "voleur", "epeiste" };
}



std::string Nain::getname() {
	return "Nain";
}
std::vector<std::string> Nain::abilities() {
		return { "magic resistance" };
}
std::vector<std::string> Nain::forbiddenabilities() {
		return { "mage", "guerisseur" };
}



std::string Humain::getname() {
	return "Humain";
}
std::vector<std::string> Humain::abilities() {
	return { "speed" };
}
std::vector<std::string> Humain::forbiddenabilities() {
	return { "mage", "voleur" };
}



std::string Fairy::getname() {
	return "Fairy";
}
std::vector<std::string> Fairy::abilities() {
	return { "fly" };
}
std::vector<std::string> Fairy::forbiddenabilities() {
	return { "guerrier", "epeiste" };
}




std::string Orc::getname() {
	return "Orc";
}
std::vector<std::string> Orc::abilities() {
	return { "earthquake" };
}
std::vector<std::string> Orc::forbiddenabilities() {
	return { "mage", "guerisseur" };
}
