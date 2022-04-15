#include "ignoreOutput.h"

int output(std::ofstream& file, Head*outHead, container::type ignore)
{
	auto cur = outHead->begin;
	int num = 0;
	for (int i = 0; i < outHead->size; i++)
	{
		if (ignore != cur->c->key)
		{
			num++;
			file << i << ": ";
			output(file, cur);
		}
		cur = cur->next;
	}
	return num;
}