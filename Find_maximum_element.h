#pragma once

template <typename T>

T Find_maximum_element(T* array, int size)
{
	T maximum;
	maximum = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > maximum) {
			maximum = array[i];
		}
	}
	return maximum;
}