#include "Libraries.h"

char Menu_choose()
{
    while (true)
    {
        char choose;
        cin >> choose;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "That input is invalid.  Please try again.\n";
        }
        else
        {
            cin.ignore(32767, '\n');

            return choose;
        }
    }
}