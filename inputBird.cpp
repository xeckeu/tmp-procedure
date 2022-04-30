#include "inputBird.h"

int input(bird& newBird, std::ifstream& file)
{
	int num = 0;
	file >> newBird.name;
	if (!file.fail())
	{
		num++;
	}
	file >> newBird.migratory;
	if (!file.fail())
	{
		num++;
	}
	file >> newBird.age;
	if (!file.fail())
	{
		num++;
	}
	return num;
}