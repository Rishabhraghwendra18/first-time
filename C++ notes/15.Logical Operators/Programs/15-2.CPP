#include <iostream.h> 
#include <conio.h>
int main()
{ 
	clrscr();
	cout << ((4 == 3) || (9 <= 9)) << endl;
	cout << ((2 <= 1) || (1 != 1)) << endl;
	
	cout << ((4 == 3) && (9 <= 9)) << endl;
	cout << ((2 >= 1) && (1 != 2)) << endl;
	
	cout << (!(9 <= 9)) << endl;
	cout << (!(2 <= 1)) << endl;

	int x, y;
	cout << (x = 5, x + 2) << endl;
	cout << (y = 5, y = 3) << endl;

	getch();
	return 0; 
}