#include "InputContainer.h"
#include "inputElement.h"
#include "addElement.h"
int input(std::ifstream& file, Head* container)
{
	int num = 0;
	while (!file.eof())
	{
		Element*newElement = new Element();
		if ((newElement->c = input(file)) != 0)
		{
			num++;
			addElement(container, newElement);

		}
	}
	return num;
}
