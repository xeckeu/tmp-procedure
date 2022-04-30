
#include "Init.h"

Head*  InitList(Head* inContainer)
{
	if (inContainer == nullptr)
	{
		return nullptr;
	}
	inContainer->begin = nullptr;
	inContainer->end = nullptr;
	inContainer->size = 0;
	return inContainer;
}