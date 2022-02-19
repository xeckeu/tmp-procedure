#include "InputContainer.h"
#include "inputElement.h"
#include "addElement.h"
void input(std::ifstream& file, Head* container)
{
	
	while (!file.eof())
	{
		Element*newElement = new Element();
		if ((newElement->c = input(file)) != 0)
		{
			addElement(container, newElement);

		}
	}
		
}
