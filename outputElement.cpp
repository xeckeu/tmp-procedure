#include "outputElement.h"

bool output(std::ofstream& file, Element * outElement)
{
	bool good=false;
	switch (outElement->c->key)
	{
	case container::type::BIRD:
		{
			if (output(outElement->c->b, file) == 0)
			{
				good = true;
			}
			break;
		}
	case container::type::FISH:
	{
		if (output(outElement->c->f, file) == 0)
		{
			good = true;
		}
		break;
	}
	case container::type::ANIMAL:
	{
		if (output(outElement->c->a, file) == 0)
		{
			good = true;
		}
		break;
	}
	default:
	{
		file << "Incorrect animal\n";
	}
	}
	int lenght= nameLenght(outElement);
	if (lenght != -1)
	{
		file << "Name lenght " << lenght << "\n";
	}
	else
	{
		file << "fatal error\n";
		return false;
	}
		
	return true;
}