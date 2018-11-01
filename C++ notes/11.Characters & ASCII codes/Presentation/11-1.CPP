#include <iostream.h>
#include <conio.h>
int main()
{
 	clrscr();
 	char inputCh;
	cout << "Enter character : ";
	cin >> inputCh;
	int val1 = inputCh;
	int val2 = 'a';
	int val3 = val1 - val2;
	char outputCh  = 'A' + val3;
	cout << "Output character : ";
	cout << outputCh;
	getch();
	return 0;
}