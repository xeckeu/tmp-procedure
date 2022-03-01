#include "ignoreOutput.h"

void output(std::ofstream& file, Head*outHead, container::type ignore)
{
	file << "Container contains " << outHead->size << " elements\n";
	auto cur = outHead->begin;
	for (int i = 0; i < outHead->size; i++)
	{
		if (ignore != cur->c->key)
		{

			file << i << ": ";
			output(file, cur);
		}
		cur = cur->next;
	}
}