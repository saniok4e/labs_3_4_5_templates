#pragma once
#include "Libraries.h"
#include "Prototypes.h"
#include "templates.h"

template <typename T>

int Main_Sem_4(T type)
{
	cout << "Welcome to seminar 4\n\n";

	const int maximum = 50;
	int mode;
	int shift;
	int str;
	int col;

	cout << "enter strings of array: ";
	str = size_two_dimensional(maximum);
	cout << endl;
	cout << "enter columns of array: ";
	col = size_two_dimensional(maximum);
	cout << endl;

	T** array;
	array = Create_two_dimensional_array(type, str, col);

	Fill_two_dimensional_array(array, str, col);
	system("cls");
	Output_two_dimensional_array(array, str, col);
	cout << endl;
	mode = Get_mode();

	cout << "Enter amount of shift \n";
	shift = Get_number();
	system("cls");

	T** shifted_array;
	shifted_array = Create_two_dimensional_array(type, str, col);
	if (mode == 0) {
		shift %= str;
		shifted_array = Array_shift_0_mode(array, str, col, shift);
	}

	else if (mode == 1) {
		shift %= col;
		shifted_array = Array_shift_1_mode(array, str, col, shift);
	}

	cout << "Array before shift:\n";
	Output_two_dimensional_array(array, str, col);

	cout << "Array after shift:\n";
	Output_two_dimensional_array(shifted_array, str, col);
	system("pause");
	system("cls");

	for (int i = 0; i < str; i++) {
		delete[] shifted_array[i];
	}
	delete[] shifted_array;

	for (int i = 0; i < str; i++) {
		delete[] array[i];
	}
	delete[] array;

	return 0;
}