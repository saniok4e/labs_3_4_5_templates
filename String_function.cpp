#include "Prototypes.h"
#include "Libraries.h"

char* fila_function(int lung, char* fila)
{
    char* new_buf = new char[lung];

    for (int i = 0; i < lung; i++) {
        new_buf[i] = fila[i];
    }

    bool flag = false;

    if (new_buf[0] == 'a' || new_buf[0] == 'e' || new_buf[0] == 'i' || new_buf[0] == 'o' || new_buf[0] == 'u' || new_buf[0] == 'y')
    {
        new_buf[0] = toupper(new_buf[0]);
    }

    for (int i = 1; i < lung; i++)
    {
        if (new_buf[i] == ' ' || new_buf[i] == '\'')
        {
            if (new_buf[i + 1] == 'a' || new_buf[i + 1] == 'e' || new_buf[i + 1] == 'i' || new_buf[i + 1] == 'o' || new_buf[i + 1] == 'u' || new_buf[i + 1] == 'y')
            {
                new_buf[i + 1] = toupper(new_buf[i + 1]);
                flag = true;
            }
        }
    }
    if (flag)
    {
        return new_buf;
    }

    else 
    {
        cout << "There if nothing to transform"<< endl;
        return new_buf;
    }
}