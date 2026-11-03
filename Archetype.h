#pragma once
#include <string>

class Archetype

{
};

class Epeiste : public Archetype {
	
	std::string getepeiste();
};

class Mage : public Archetype {

	std::string getmage();
};

class Guerrier : public Archetype {

	std::string getguerrier();
};

class Voleur : public Archetype {

	std::string getvoleur();
};

class Guerisseur : public Archetype {

	std::string getguerisseur();
};


