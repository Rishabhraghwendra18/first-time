#include<iostream>
#include<cmath>
#include<string>
 using namespace std;
int main() {
	int x,y,m;
	float p;
	cout<<"Please neter a value to calculates its value ";
	cin>>x;
	cout<<"Please enter 1st part";
	cin>>y;
	cout<<"Please enter 2nd part ";
	cin>>m;
	p=pow(x,(y-m));
	cout<<"The result is "<<p;

}
