#include "outputAnimal.h"

void output(animal out, std::ofstream& file)
{
	file << "It's animal, name " << out.name << " eating type ";
	switch (out.eat)
	{
	case animal::nutrition::herbivore:
	{
		file << "herbivore\n";
		break;
	}
	case animal::nutrition::insectivore:
	{
		file << "insectivore\n";
		break;
	}
	case animal::nutrition::predator:
	{
		file << "predator\n";
		break;
	}
	default:
		break;
	}
}