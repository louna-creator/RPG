#pragma once
class Statistiques
{
	int force;
	int intelligence;
	int abilite;
	int energie;

public :
	int getforce();
	void setforce(int& value);
	void addforce(int& value);

	int getintelligence();
	void setintelligence(int& value);
	void addintelligence(int& value);

	int getabilite();
	void setabilite(int& value);
	void addabilite(int& value);

	int getenergie();
	void setenergie(int& value);
	void addenergie(int& value);
	
};

