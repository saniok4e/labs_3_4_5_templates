#include "Libraries.h"

int Get_number()
{
    while (true)
    {
        int choose;
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