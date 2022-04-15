
#include "delete.h"
int deleteContainer(Head* head)
{
	auto erasing= head->begin;
	while (head->size > 0)
	{
		auto cur = erasing->next;
		erasing->next = erasing->prev;
		erasing->prev = cur;
		delete erasing;
		erasing = cur;
		head->size--;
	}
	return head->size;
}