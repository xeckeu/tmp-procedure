#include "outputBird.h"

void output(bird out, std::ofstream& file)
{
	file << "It's bird, name " << out.name << " migratory ";
	if(out.migratory)

		file<< "true.\n";
	else file << "false.\n";
}