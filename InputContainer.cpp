#include "InputContainer.h"
#include "inputElement.h"
#include "addElement.h"
void input(std::ifstream& file, Head* container)
{
	Element*newElement=new Element();
	while (file.eof() != 0)
		if ((newElement->c = input(file)) != 0)
		{
			addElement(container, newElement);
			
		}
}
