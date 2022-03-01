#include "nameLenght.h"
int nameLenght(char name[30])
{
	int cur = 0;
	while (name[cur] != '\0')
	{
		cur++;
	}
	return cur;
}