#pragma once
#include "Libraries.h"

template <typename T>

void Output_one_dimensional_array(T* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] Element of array is ";
		cout << array[i] << endl;
	}

	cout << endl << endl;

}