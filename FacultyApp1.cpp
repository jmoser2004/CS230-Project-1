#include <iostream>
#include "Faculty.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int menu()
{
	int choice;
	cout <<"\t\tMain Menu\n"
		<<"\t\t1. Add a faculty\n"
		<<"\t\t2. Edit a faculty\n"
		<<"\t\t3. View all faculty\n"
		<<"\t\t4. EXIT\n"
		<<"\tEnter your choice: ";
	cin >>choice;
	return choice;
}

int main(int argc, char** argv) {
	int option = 0;
	Faculty facList[5];
	
	while (option != 4)
	{
		option = menu();
		switch(option)
		{
			case 4: cout <<"Goodbye!\n";
		}
		
	}
	return 0;
}