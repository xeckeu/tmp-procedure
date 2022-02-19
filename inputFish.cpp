#include "inputFish.h"

void input(fish newFish, std::ifstream& file)
{
	
	std::string areal;
	file>>newFish.name>>areal;
	if (areal == "Lake")
		newFish.areal=fish::habitat::Lake;
	else if(areal=="River")
		newFish.areal = fish::habitat::River;
	else if (areal == "Sea")
		newFish.areal = fish::habitat::Sea;
}