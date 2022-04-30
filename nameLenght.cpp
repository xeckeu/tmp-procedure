#include "nameLenght.h"
int nameLenght(Element* el)
{
	int cur = 0;
	switch (el->c->key)
	{
	case container::type::BIRD:
	{
		if (el->c->b.name != nullptr)
		{
			while (el->c->b.name[cur] != '\0')
			{
				cur++;
			}
		}
		break;
	}
	case container::type::FISH:
	{
		if (el->c->f.name != nullptr)
		{
			while (el->c->f.name[cur] != '\0')
			{
				cur++;
			}
		}
		break;
	}
	
	case container::type::ANIMAL:
	{
		if (el->c->a.name != nullptr)
		{
			while (el->c->a.name[cur] != '\0')
			{
				cur++;
			}
		}
		break;
	}
	default:
	{
		return -1;
	}
	}
	return cur;
}