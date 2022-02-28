#pragma once 

#include "Bird.h"
#include "Fish.h"
#include "animal.h"


struct container
{
	//странные дела, вообще ничего не понял, но без этого не работает. Конструктор и деструктор структуры...
	container() {};
	~container() {};

	enum type { BIRD, FISH, ANIMAL };
	type key;

	union
	{
		bird b;
		fish f;
		animal a;
	};
};