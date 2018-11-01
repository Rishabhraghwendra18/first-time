#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	int number;
	cout << "Enter a positive integer : ";
	cin >> number;
	cout << "Last 3 digits are : ";
	cout << number%1000;
	getch();
	return 0;
}