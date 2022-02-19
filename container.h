#pragma once 

#include "Bird.h"
#include "Fish.h"



struct container
{
	//�������� ����, ������ ������ �� �����, �� ��� ����� �� ��������. ����������� � ���������� ���������...
	container() {};
	~container() {};

	enum type { BIRD, FISH };
	type key;

	union
	{
		bird b;
		fish f;
	};
};