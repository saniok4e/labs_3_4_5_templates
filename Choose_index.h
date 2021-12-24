#pragma once
#include "Prototypes.h"
#include "Libraries.h"

template <typename T>

int Choose_index(T* array, int size, T maximum, int count)
{
	while (true)
	{
		int choose;
		cout << "input index\n";
		choose = Get_number();
		for (int i = 0; i < size; i++) {
			if (array[i] == maximum) {
				if (choose == i) {
					cout << "Your index was founded\n";
					return choose;
				}
			}
		}
		cout << "Your index wasn't founded,try again\n";
	}
}