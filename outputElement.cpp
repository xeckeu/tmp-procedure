#include "outputElement.h"

void output(std::ofstream& file, Element * outElement)
{
	switch (outElement->c->key)
	{
	case container::type::BIRD:
		{
			output(outElement->c->b, file);
			break;
		}
	case container::type::FISH:
	{
		output(outElement->c->f, file);
		break;
	}
	default:
		file << "Incorrect animal\n";
	}
	file << "Name lenght " << nameLenght(outElement) << "\n";
}