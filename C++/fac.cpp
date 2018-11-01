#include<iostream>
#include<cmath>
int main() {
	int n,k,com;
	std::cout<<"Please enter a value to calucale it's binomial cofficent ";
	std::cin>>n>>k;
	com=c(n,k);
	std::cout<<"The binomial cofficent is \n"<<com;
}
