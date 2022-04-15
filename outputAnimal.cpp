#include "outputAnimal.h"

int output(animal out, std::ofstream& file)
{
	file << "It's animal, name " << out.name << " eating type ";
	if (file.bad())
		return 1;
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
	if (file.bad())
		return 2;
	file << "age " << out.age << "\n";
	if (file.bad())
		return 3;
	return 0;
}