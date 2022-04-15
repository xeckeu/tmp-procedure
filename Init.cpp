
#include "Init.h"

Head*  InitList(Head* inContainer)
{
	inContainer->begin = nullptr;
	inContainer->end = nullptr;
	inContainer->size = 0;
	return inContainer;
}