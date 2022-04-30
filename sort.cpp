#include "sort.h"
#include "nameLenght.h"
#include "Init.h"
#include "addElement.h"
#include "equ.h"
int* sort(Head*& list)
{
	int* choises = new int[list->size];
	int i = 0;
	int indChoises=0;
	int minInd = 0;
	if (list->size == 0)
	{
		return nullptr;
	}
	auto cur = list->begin;
	do
	{
		cur->nameLenght = nameLenght(cur);
		cur = cur->next;
	}while (cur != list->begin);
	Head* newList = new Head();
	InitList(newList);
	while (list->size != 0)
	{
		minInd = 0;
		cur = list->begin;
		auto newMin = list->begin;
		int curS = list->size;
		do
		{
			if (equ(newMin, cur) == 1)
			{
				newMin = cur;
				minInd = i;
			}
			i++;
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
		choises[indChoises] = minInd;
		indChoises++;
	}
	delete[] list;
	list = newList;
	return choises;
}