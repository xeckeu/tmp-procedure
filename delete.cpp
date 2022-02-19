#include "delete.h"
void deleteContainer(Head* head)
{
	auto erasing= head->begin;
	while (head->size > 0)
	{
		auto cur = erasing->prev;
		erasing->prev = erasing->next;
		erasing->next = cur;
		delete erasing;
		head->size--;
	}
}