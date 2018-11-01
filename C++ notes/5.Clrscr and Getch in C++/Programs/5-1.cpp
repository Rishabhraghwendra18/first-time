#include <iostream.h>
int main()
{
	int number;
	cout << "Enter a positive integer : ";
	cin >> number;
	cout << "Last 3 digits are : ";
	cout << number%1000;
	return 0;
}