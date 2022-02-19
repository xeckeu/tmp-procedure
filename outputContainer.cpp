#include "outputContainer.h"

void output(std::ofstream& file, Head*outHead)
{
	file << "Container contains " << outHead->size << " elements\n";
	auto cur = outHead->begin;
	for (int i = 0; i < outHead->size; i++)
	{
		file << i << ": ";
		output(file, cur);
	}
}