#include "inputFish.h"

void input(fish& newFish, std::ifstream& file)
{
	
	std::string areal;
	file>>newFish.name>>areal;
	if (areal == "lake")
		newFish.areal=fish::habitat::Lake;
	else if(areal=="river")
		newFish.areal = fish::habitat::River;
	else if (areal == "sea")
		newFish.areal = fish::habitat::Sea;
}