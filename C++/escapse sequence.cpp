#include<iostream>
int main() {
	int x_1b,y_2a; char m_3c; int res_9;
	std::cout<<"Please enter some value";
	std::cin>>x_1b>>y_2a>>m_3c;
	if (m_3c='e')
		{ m_3c=0;
		res_9=x_1b+y_2a+m_3c;
		std::cout<<"The sum is = "<<res_9;
		}
	else 
	{
		res_9=x_1b+y_2a+m_3c;
		std::cout<<"The sum is = "<<res_9;
		}	
	
	return 0;
}
