#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	int num1, num2;
	cout << "Enter numbers : ";
	cin >> num1 >> num2;
	int max = ((num1 > num2)? num1 : num2);
	cout << "Maximum is : " << max;
	getch();
	return 0;
}