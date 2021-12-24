#include "Libraries.h"

int Get_maximum(int maximum)
{
    while (true)
    {
        int choose;
        cin >> choose;
        
        if (choose != maximum) {
            cout << "You didn't choose a maximum\n";
        }
        else if (cin.fail())
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