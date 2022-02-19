#pragma once


#include "container.h"


struct Element
{
	Element* next;
	Element* prev;

	container* c;
};
