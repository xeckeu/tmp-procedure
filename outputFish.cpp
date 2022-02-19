#include "outputFish.h"

void output(fish out, std::ofstream& file)
{
	file << "It's fish, name is " << out.name << " areal is ";
	switch (out.areal)
	{
	case fish::habitat::Lake:
	{
		file << "lake.\n";
		break;
	}
	case fish::habitat::River:
	{
		file << "river.\n";
		break;
	}
	case fish::habitat::Sea:
	{
		file << "sea.\n";
		break;
	}

	default:
		break;
	}
}