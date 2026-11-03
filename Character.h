#pragma once
#include <string>
#include "TraitsDePersonnalite.h"

class Character
{
	std::string name ;
	std::string Personnalite;
public: 
	Character();
	std::string getname();
	void setname(std::string& value);
	
	int poids = 0;
	int taille = 0;

	int gettaille();
	void settaille( int& value);

	int getpoids();
	void setpoids(int& value);

	std::string getpersonnalite();
	Character* setpersonnalite(std::string& value);



};

