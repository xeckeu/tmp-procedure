#include "outputAnimal.h"

void output(animal out, std::ofstream& file)
{
	file << "It's animal, name " << out.name << " eating type ";
	switch (out.eat)
	{
	case animal::nutrition::herbivore:
	{
		file << "herbivore ";
		break;
	}
	case animal::nutrition::insectivore:
	{
		file << "insectivore ";
		break;
	}
	case animal::nutrition::predator:
	{
		file << "predator ";
		break;
	}
	default:
		break;
	}
	file << "age " << out.age << "\n";
}