#pragma once
#include "Libraries.h"


template <typename T>
T get_number_template(T* array)
{
    while (true)
    {
        T choose;
        cin >> choose;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "That input is invalid.  Enter the number again\n";
        }
        else
        {
            cin.ignore(32767, '\n');

            return choose;
        }
    }
}