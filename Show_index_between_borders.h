#pragma once
#include "Libraries.h"

template <typename T>

int Show_index_between_borders(T* array, int size, T left_border, T right_border)
{
	int count = 0;

	cout << "indexes: ";

	for (int i = 0; i < size; i++)
	{
		if (array[i] < right_border && array[i] > left_border) {
			cout << "[" << i << "]" << "  ";
			count++;
		}
	}
	if (count == 0) {
		cout << "Not founded";
	}

	cout << endl;

	return count;
}