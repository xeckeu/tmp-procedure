#include "inputAnimal.h"


void input(animal& newAnimal, std::ifstream& file)
{
	file >> newAnimal.name;
	std::string cur;
	file >> cur;
	if (cur == "herbivore")
		newAnimal.eat = animal::nutrition::herbivore;
	else if (cur == "insectivore")
		newAnimal.eat = animal::nutrition::insectivore;
	else if (cur == "predator")
		newAnimal.eat = animal::nutrition::predator;
}