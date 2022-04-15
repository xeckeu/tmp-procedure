#include "outputContainer.h"

int output(std::ofstream& file, Head*outHead)
{
	int num = 0;
	file << "Container contains " << outHead->size << " elements\n";
	auto cur = outHead->begin;
	for (int i = 0; i < outHead->size; i++)
	{
		file << i << ": ";
		if (output(file, cur) == true)
		{
			num++;
			cur = cur->next;
		}
	}
	return num;
}