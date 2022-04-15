#include "inputBird.h"

int input(bird& newBird, std::ifstream& file)
{
	int num = 0;
	if(file>>newBird.name)
		num++;
	if(file  >> newBird.migratory)
		num++;
	if(file >> newBird.age)
		num++;
	return num;
}