#include "addElement.h"

void addElement(Head* container, Element* element)
{
	if (container->size == 0)
	{
		container->end = element;
		container->begin = element;
		container->end->next = container->begin;
		container->end->prev = container->begin;
		container->begin->next = container->end;
		container->begin->prev = container->end;
	}
	else
	{
		container->end->next = element;
		element->next = container->begin;
		element->prev = container->end;
		container->end = element;
		container->begin->prev = element;
	}
	container->size++;
}