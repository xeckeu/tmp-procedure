#include "sort.h"
#include "nameLenght.h"
#include "Init.h"
#include "addElement.h"
Head* sort(Head* list)
{
	auto cur = list->begin;
	do
	{
		cur->nameLenght = nameLenght(cur);
		cur = cur->next;
	}while (cur != list->end);
	Head* newList = new Head();
	Init(newList);
	while (list->size != 0)
	{
		cur = list->begin;
		auto newMin = list->begin;
		do
		{
			if (newMin->nameLenght > cur->nameLenght)
				newMin = cur;
			cur = cur->next;
		} while (cur != list->end);
		if (newMin == list->begin)
		{
			list->begin = list->begin->next;
		}
		if (newMin == list->end)
		{
			list->end = list->begin->prev;
		}
		auto cur2 = newMin->prev;
		newMin->prev = newMin->next;
		cur2->next = newMin->prev;
		addElement(newList, newMin);
	}
	delete[] list;
	return newList;
}