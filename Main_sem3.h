#pragma once
#include "Libraries.h"
#include "Prototypes.h"
#include "Sem_3_logic.h"
#include "Create_one_dimensional_array.h"
#include "Fill_array.h"
#include "Output_one_dimensional_array.h"
template <typename T>

int Main_Sem_3(T type)
{
	T* array = NULL;
	int size;
	const int max_array_elements = 50;
	size = Get_size_of_array(max_array_elements);
	system("cls");
	array = Create_one_dimensional_array(type,size);
	Fill_array(array, size);
	system("cls");

	cout << "Your current array: \n";
	Output_one_dimensional_array(array, size);
	Sem_3_logic(array, size);

	cout << "Seminar 3 ended\n";
	system("pause");
	system("cls");

	return 0;
}