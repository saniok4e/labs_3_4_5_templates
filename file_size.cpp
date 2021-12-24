#include "Libraries.h"
int fileSize() {
    fstream file("C:\\Users\\sanio\\Documents\\text.txt");
    int size = 0;

    file.seekg(0, std::ios::end);
    size = file.tellg();

    cout << "Your file weighs : " << size << " bites" << endl << endl;
    file.close();

    return size+1;
}