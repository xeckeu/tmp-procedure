#include "ignoreOutput.h"

int output(std::ofstream& file,//файл для вывода
	Head*outHead,//указатель на выводимый список
	container::type ignore//тип игнорируемого значения
	)
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