#include "equ.h"

//функция сравнения двух животных по их длине их имени.
int equ(Element* f, Element* s)
{
	if (f == nullptr || s == nullptr)
	{
		return -2;
	}
	if (f->nameLenght > s->nameLenght)
	{
		return 1;
	}
	if (f->nameLenght == s->nameLenght)
	{
		return 0;
	}
	if (f->nameLenght < s->nameLenght)
	{
		return -1;
	}
}