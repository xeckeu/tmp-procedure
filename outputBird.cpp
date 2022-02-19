#include "outputBird.h"

void output(bird out, std::ofstream& file)
{
	file << "It's bird, name " << out.name << " migratory " << out.migratory << '/n';
}