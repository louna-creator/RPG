#pragma once
#include <vector>
#include <string>
#include "Race.h"
	class Elfes 
	{
		Elfes();
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	};

	class Nain
	{
		Nain();
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	};

	class Humain
	{
		Humain();
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	};

	class Fairy
	{
		Fairy();
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	};

	class Orc
	{
		Orc();
		std::string getname();

		std::vector<std::string> abilities();

		std::vector<std::string> forbiddenabilities();
	};
