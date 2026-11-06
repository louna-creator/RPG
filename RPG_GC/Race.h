#pragma once
#include <vector>
#include <string>


class Character;
class Race {

	Character* character = nullptr;
	std::vector<std::string> _Race;
public:
	bool Verif(std::string userverif);
	Race() {
	}
	virtual std::string getname();
	virtual std::vector<std::string> abilities();
	virtual std::vector<std::string> forbiddenabilities();

};
class Elfes : public Race
{
public:

	Elfes() : Race() {
	}

		virtual std::string getname() override;

		virtual std::vector<std::string> abilities() override;

		virtual std::vector<std::string> forbiddenabilities() override;

};

class Nain : public Race
{
	Nain() : Race() {
	}

		virtual std::string getname() override;

		virtual std::vector<std::string> abilities() override;

		virtual std::vector<std::string> forbiddenabilities() override;
	

};

class Humain : public Race
{
	Humain() : Race() {
	}

		virtual std::string getname() override;

		virtual std::vector<std::string> abilities() override;

		virtual std::vector<std::string> forbiddenabilities() override;

	
};

class Fairy : public Race
{
	Fairy() : Race() {
	}

		virtual std::string getname() override;

		virtual std::vector<std::string> abilities() override;

		virtual std::vector<std::string> forbiddenabilities() override;

	
};

class Orc : public Race
{
	Orc() : Race() {
	}
		
		virtual std::string getname() override;

		virtual std::vector<std::string> abilities() override;

		virtual std::vector<std::string> forbiddenabilities() override;

};
