#include "Libraries.h"
#include "Prototypes.h"

int size_two_dimensional(const int max) 
{
	int size;
	do 
	{
		size = Get_number();
		if (size > max) {
			cout << "elements of strings or columns can't be more than maximum\n";
		}
		if (size <= 0) {
			cout << "elements can't be equal or lower than zero\n";
		}
	} while (size > max || size <= 0);

	return size;
}