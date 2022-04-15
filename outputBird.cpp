#include "outputBird.h"

int output(bird out, std::ofstream& file)
{
	file << "It's bird, name " << out.name << " migratory ";
	if (file.bad())
		return 1;
	if(out.migratory)

		file<< "true";
	else file << "false";
	if (file.bad())
		return 2;
	file << ", age " << out.age << "\n";
	if (file.bad())
		return 3;
	return 0;
}