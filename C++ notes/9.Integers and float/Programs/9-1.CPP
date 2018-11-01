#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	float radius, circum;
	cout << "Enter radius : ";
	cin >> radius;
	circum = 2 * 3.14 * radius;
	cout << "Circumference = " << circum;
	getch();
	return 0;
}