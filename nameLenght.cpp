#include "nameLenght.h"
int nameLenght(Element* el)
{
	int cur = 0;
	switch (el->c->key)
	{
	case container::type::BIRD:
	{
		while (el->c->b.name[cur] != '\0')
		{
			cur++;
		}
		break;
	}
	case container::type::FISH:
	{
		while (el->c->f.name[cur] != '\0')
		{
			cur++;
		}
		break;
	}
	default:
		break;
	}
	return cur;
}