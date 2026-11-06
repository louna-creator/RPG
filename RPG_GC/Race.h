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

};
class Elfes : public Race
{
public:

	Elfes() : Race() {

		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	}

};

class Nain : public Race
{
	Nain() : Race() {

		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	}

};

class Humain : public Race
{
	Humain() : Race() {
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	}
};

class Fairy : public Race
{
	Fairy() : Race() {
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	}
};

class Orc : public Race
{
	Orc() : Race() {
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	}
};
