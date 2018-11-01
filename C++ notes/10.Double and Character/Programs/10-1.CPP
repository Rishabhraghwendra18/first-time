#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	float m1, m2, m3;
	cout << "Enter marks : ";
	cin >> m1 >> m2 >> m3;
	float avg = (m1 + m2 + m3)/3;
	cout << "Average = " << avg;
	getch();
	return 0;
}