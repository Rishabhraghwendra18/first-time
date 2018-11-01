#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	int number;
	cout << "Enter a positive integer : ";
	cin >> number;
	int digit = number % 10;
	cout << "Last digit : " << digit << "\n";
	number = number / 10;
	digit = number % 10;
	cout << "Second last digit : " << digit;
	getch();
	return 0;
}