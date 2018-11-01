#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	int number;
	cout << "Enter a number : ";
	cin >> number;
	int sqr = number * number;
	cout << "Square of " << number << " is " << sqr;
	getch();
	return 0;
}