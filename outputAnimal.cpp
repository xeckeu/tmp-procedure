#include "outputAnimal.h"

int output(animal out, std::ofstream& file)
{
	file << "It's animal, name " << out.name << " eating type ";
	if (file.fail())
	{
		return 1;
	}
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
	{
		return 2;
	}
	}
		
	file << "age " << out.age << "\n";
	if (file.fail())
	{
		return 3;
	}
	return 0;
}