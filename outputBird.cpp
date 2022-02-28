#include "outputBird.h"

void output(bird out, std::ofstream& file)
{
	file << "It's bird, name " << out.name << " migratory ";
	if(out.migratory)

		file<< "true";
	else file << "false";
	file << ", age " << out.age << "\n";
}