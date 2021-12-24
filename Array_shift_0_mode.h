#pragma once
#include "Libraries.h"

template <typename T>

T** Array_shift_0_mode(T** arr, int str, int col, int shift)
{
    T** pnewArray = arr;
    for (int k = 0; k < shift; k++)
    {
        for (int i = 0; i < col; i++)
        {
            T temp = pnewArray[str - 1][i];
            int j;
            for (j = str - 1; j > 0; j--)
            {
                pnewArray[j][i] = pnewArray[j - 1][i];
            }
            pnewArray[j][i] = temp;
        }
    }
    return pnewArray;
}