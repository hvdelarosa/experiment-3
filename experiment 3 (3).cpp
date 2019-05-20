#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	
	char array[100];
	int arraysize;
	
	cout << "Please enter the elements:\n"; cin>> array;

	arraysize = 0;
	
	while (array [arraysize] !='\0')
	arraysize++;
		
	cout << "Output:\n";
	
	for(int a=arraysize-1; a>=0; a--)
	{
		cout << array[a];
	}
	
	cout << "\nSize:" << arraysize;
	
	getch();	
	return 0;
}


