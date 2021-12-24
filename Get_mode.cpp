#include "Libraries.h"
#include "Prototypes.h"
int Get_mode() 
{
	int mode;
	cout << "Enter shift mode" << endl
		<< "0. Shift down" << endl
		<< "1. Shift to the right" << endl;
	while (true) 
	{
		mode = Get_number();
		if (mode == 0 || mode == 1) 
		{
			return mode;
		}
	}
}