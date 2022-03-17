#include "equ.h"

int equ(Element* f, Element* s)
{
	if (f->nameLenght > s->nameLenght)
		return 1;
	if (f->nameLenght == s->nameLenght)
		return 0;
	if (f->nameLenght < s->nameLenght)
		return -1;
}