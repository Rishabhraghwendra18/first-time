#include <iostream.h>
#include <conio.h>
int main()
{
	clrscr();
	char ch;
	cout << "Enter character : ";
	cin >> ch;
	int code = ch;
	cout << "ASCII code : " << code;
	getch();
	return 0;
}