#include "Libraries.h"
#include "Prototypes.h"
#include "Main_sem3.h"
#include "Main_sem4.h"
int main_menu()
{
	cout << "\t\tWelcome to the program\n";
	while (true) 
{
		Show_main_menu();
		switch (Menu_choose())
		{
		case '1':
			system("cls");
			cout << "You,ve chosen <One dimensional array>\n";
			Main_Sem_3(1.0);
			break;
		case '2':
			system("cls");
			cout << "You,ve chosen <Two dimensional array>\n\n";
			Main_Sem_4(1);
			break;
		case '3':
			system("cls");
			cout << "You, ve chosen <Working with strings>\n\n";
			Main_sem_5();
			break;
		case '4':
			cout << "Program ended\n";
			return 0;
			break;

		default:
			cout << "Wrong data, this function doesn't exist, enter number again: \n";
			break;
		}
	}
	return 0;
}