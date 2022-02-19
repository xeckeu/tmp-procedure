#include "Init.h"

void* Init(Head* inContainer)
{
	inContainer->begin = nullptr;
	inContainer->end = nullptr;
	inContainer->size = 0;
	return 0;
}