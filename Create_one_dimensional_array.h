#pragma once
#include "Libraries.h"

template <typename T>

T* Create_one_dimensional_array(T type,int size)
{
	T* array = new T[size];

	return array;
}