#include "inputElement.h"
#include <string>
#include <iostream>
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
		if (input(newElement->b, file) == 3)
		{
			return newElement;
		}
		break;
	}
	case 'f':
	{
		newElement = new container;
		newElement->key = container::type::FISH;
		;
		if (input(newElement->f, file) == 3)
		{
			return newElement;
		}
		break;
	}
	case 'a':
	{
		newElement = new container;
		newElement->key = container::type::ANIMAL;
		;
		if (input(newElement->a, file) == 3)
		{
			return newElement;
		}
		break;
	}
	
	}
	file.clear();
	std::string cur;
	std::getline(file, cur);
	return false;

}