#include "inputAnimal.h"


int input(animal& newAnimal, std::ifstream& file)
{
	int succesful = 0;
	file >> newAnimal.name;
	if (!file.fail())
	{
		succesful++;
	}
	
	std::string cur;
	file >> cur;
	if (cur == "herbivore")
	{
		newAnimal.eat = animal::nutrition::herbivore;
		succesful++;
	}
	else if (cur == "insectivore")
	{
		newAnimal.eat = animal::nutrition::insectivore;
		succesful++;
	}
	else if (cur == "predator")
	{
		newAnimal.eat = animal::nutrition::predator;
		succesful++;
	}
	file >> newAnimal.age;
	if (!file.fail())
	{
		succesful++;
	}

	return succesful;
}