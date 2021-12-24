#pragma once
#include "Prototypes.h"
#include "Libraries.h"

template <typename T>

int Fill_two_dimensional_array(T** A, int str, int col)
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";

			A[i][j] = Get_number();
		}

		cout << endl;
	}

	return 0;
}