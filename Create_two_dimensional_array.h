#pragma once
#include "Libraries.h"
#include "Prototypes.h"

template <typename T>

T** Create_two_dimensional_array(T type,int str, int col)
{
	T** A;

	A = new T* [str];

	for (int i = 0; i < str; i++) {
		A[i] = new T[col];
	}

	return A;
}