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
	}while (cur != list->begin);
	Head* newList = new Head();
	Init(newList);
	while (list->size != 0)
	{
		cur = list->begin;
		auto newMin = list->begin;
		int curS = list->size;
		do
		{
			if (newMin->nameLenght > cur->nameLenght)
				newMin = cur;
			cur = cur->next;
			curS -= 1;
		} while (curS);
		if (newMin == list->begin)
		{
			list->begin = list->begin->next;
		}
		if (newMin == list->end)
		{
			list->end = list->end->prev;
		}
		auto cur2 = newMin->prev;
		newMin->prev->next = newMin->next;
		newMin->next->prev = cur2;
		addElement(newList, newMin);
		
		list->size--;
	}
	delete[] list;
	return newList;
}