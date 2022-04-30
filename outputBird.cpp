#include "outputBird.h"

int output(bird out, std::ofstream& file)
{
	file << "It's bird, name " << out.name << " migratory ";
	if (file.fail())
	{
		return 1;
	}
	if (out.migratory)
	{
		file << "true";
	}
	else
	{
		file << "false";
	}
	if (file.fail())
	{
		return 2;
	}
	file << ", age " << out.age << "\n";
	if (file.fail())
	{
		return 3;
	}
	return 0;
}