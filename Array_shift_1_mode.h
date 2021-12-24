#pragma once
#include "Libraries.h"

template <typename T>

T** Array_shift_1_mode(T** arr, int str, int col, int shift)
{
    T** pnewArray = arr;
    for (int i = 0; i < shift; i++)
    {
        for (int j = 0; j < str; j++)
        {
            for (int k = col - 1; k > 0; k--)
            {
                swap(pnewArray[j][k], pnewArray[j][k - 1]);
            }
        }
    }
    return pnewArray;
}