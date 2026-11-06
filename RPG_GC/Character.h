#pragma once
#include <string>
#include "TraitsDePersonnalite.h"
#include "Race.h"

class Race;
class Archetype;
class Character
{
	Race* race = nullptr;
	Archetype* archetype = nullptr;
	std::string name;
	std::string Personnalite;
	std::string raceStr;
	std::string archetypeStr;


public:
	Character();
	std::string getname();
	void setname(std::string& value);

	int poids = 0;
	int taille = 0;

	int gettaille();
	void settaille(int& value);

	int getpoids();
	void setpoids(int& value);

	std::string getpersonnalite();
	void setpersonnalite(std::string& value);

	Race* getrace() const;
	void setrace(std::string& value);

	Archetype* getarchetype() const;
	void setarchetype(std::string& value);


};

