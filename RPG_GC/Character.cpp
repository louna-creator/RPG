#include "Character.h"
#include "Race.h"
#include "Archetype.h"

Character::Character() {
	name = "";
	taille = 0;
	poids = 0;
	Personnalite = "";
	raceStr = "";
	archetypeStr = "";

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
void Character::settaille(int& value) {
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

Race* Character::getrace() const {
	return race;
}
void Character::setrace(std::string& value) {
	raceStr = value;
}


Archetype* Character::getarchetype() const {
	return archetype;
}
void Character::setarchetype(std::string& value) {
	archetypeStr = value;
}

