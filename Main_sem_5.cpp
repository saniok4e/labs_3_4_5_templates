#include "Libraries.h"
#include "Prototypes.h"

int Main_sem_5() 
{
    ifstream file;
    file.open("C:\\Users\\sanio\\Documents\\text.txt");

    if (!file)
    {
        cout << "file isn't opened\n\n";
        return -1;
    }
    else
    {
        cout << "OK, file opened\n\n";
    }

    int size;
    size = fileSize();
    char* buffer = new char[size];
    file.get(buffer, size);

    char* new_buf = NULL;
    new_buf = fila_function(size,buffer);

    cout <<"String before conversion: " << buffer << endl;
    cout << "String after conversion: " << new_buf << endl;

    delete[] new_buf;
    delete[] buffer;

    system("pause");
}