#include "Character.h"
Character::Character() {
	name = "";
	taille = 0;
	poids = 0;
	Personnalite = "";
	Race = "";
}
std::string Character::getname() {
	return name;
}
void Character::setname(std::string& value) {
	name = value;
}

int Character::gettaille() {
	return taille;
}
void Character::settaille( int& value) {
	taille = value;
}
int Character::getpoids() {
	return poids;
}
	void Character::setpoids(int& value) {
	poids = value;
}

	std::string Character::getpersonnalite() {
		return Personnalite;
	}
	void Character::setpersonnalite(std::string& value) {
			Personnalite = value;
	}
	
	std::string Character::getrace() {
		return Race;
	}
	void Character::setrace(std::string& value) {
		Race = value;
	}
	
	