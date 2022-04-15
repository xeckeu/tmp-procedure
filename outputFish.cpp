#include "outputFish.h"

int output(fish out, std::ofstream& file)
{
	file << "It's fish, name is " << out.name << " areal is ";
	if (file.bad())
		return 1;
	switch (out.areal)
	{
	case fish::habitat::Lake:
	{
		file << "lake";
		break;
	}
	case fish::habitat::River:
	{
		file << "river";
		break;
	}
	case fish::habitat::Sea:
	{
		file << "sea";
		break;
	}

	default:
		break;
	}
	if (file.bad())
		return 2;
	file << ", age " << out.age << "\n";
	if (file.bad())
		return 3;
	return 0;
}