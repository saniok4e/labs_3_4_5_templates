#pragma once
#include "Libraries.h"

template <typename T>

int Show_indexes_of_maximums(T* array, int size, T maximum)
{
	int count = 0;
	cout << "Indexes of maximums: ";
	for (int i = 0; i < size; i++)
	{
		if (array[i] == maximum) {
			cout << "[" << i << "]" << " ";
			count++;
		}
	}
	cout << endl;
	return count;
}