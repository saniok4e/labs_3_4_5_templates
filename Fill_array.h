#pragma once
#include "Libraries.h"
#include "Prototypes.h"
#include "get_num_template.h"
template <typename T>

void Fill_array(T* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a[" << i << "] Element of array: ";
		array[i] = get_number_template(array);
	}

	cout << endl;

}