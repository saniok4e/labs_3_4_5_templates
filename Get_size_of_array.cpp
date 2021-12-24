#include "Libraries.h"
#include "Prototypes.h"
int Get_size_of_array(int max_array_elements) 
{
	int size;

	do 
	{
		cout << "Enter the size of array: \n";
		size = Get_number();

		if (size > max_array_elements) {
			cout << "that array has more than max elements,please enter number again\n";
		}

		if (size <= 0) {
			cout << "massive cant be created,try again\n";
		}

	} while (size > max_array_elements || size <= 0);

	return size;
}