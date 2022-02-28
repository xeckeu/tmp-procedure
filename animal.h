#pragma once

struct animal
{
	char name[30];
	enum nutrition { predator, herbivore, insectivore } eat;
};