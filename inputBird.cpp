#include "inputBird.h"

void input(bird& newBird, std::ifstream& file)
{
	file>>newBird.name;
	file  >> newBird.migratory;
}