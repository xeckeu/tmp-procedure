#include "inputElement.h"

container* input(std::ifstream& file)
{
	container* newElement=false;
	char key;
	file >> key;
	switch (key)
	{
	case 'b':
	{
		newElement = new container;
		newElement->key = container::type::BIRD;
		input(newElement->b, file);
		return newElement;
	}
	case 'f':
	{
		newElement = new container;
		newElement->key = container::type::FISH;
		input(newElement->f, file);
		return newElement;
	}
	case 'a':
	{
		newElement = new container;
		newElement->key = container::type::ANIMAL;
		input(newElement->a, file);
		return newElement;
	}
	default:
	{
		return false;
	}
	}
}