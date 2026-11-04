#pragma once
#include <string>
#include <vector>
#include "Character.h"

class Character;
class TraitsDePersonnalite
{
	Character* character = nullptr;
	std::vector<std::string> Personnalite;
public : 
	bool Verif(std::string userverif);
};

