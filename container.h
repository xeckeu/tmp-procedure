#pragma once 

#include "Bird.h"
#include "Fish.h"
#include "animal.h"


struct container
{
	//�������� ����, ������ ������ �� �����, �� ��� ����� �� ��������. ����������� � ���������� ���������...
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