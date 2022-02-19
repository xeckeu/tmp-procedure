#include "addElement.h"

void addElement(Head* container, Element* element)
{
	if (container->size == 0)
	{
		container->end = element;
		container->begin = element;
	}
	else
	{
		container->end->next = element;
		element->prev = container->end;
		container->end = element;
		container->begin->prev = element;
	}
	container->size++;
}