#include "inputFish.h"

int input(fish& newFish, std::ifstream& file)
{
	int num = 0;
	std::string areal;
	if (file >> newFish.name)
		num++;
	file >> areal;
	if (areal == "lake")
	{
		newFish.areal = fish::habitat::Lake;
		num++;
	}
	else if(areal=="river")
	{
		newFish.areal = fish::habitat::River;
		num++;
	}
	else if (areal == "sea")
		{
		newFish.areal = fish::habitat::Sea;
		num++;
	}
	if(file >> newFish.age)
		num++;

	return num;
}