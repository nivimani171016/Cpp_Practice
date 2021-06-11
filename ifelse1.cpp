#include <iostream>
using  namespace std;
int main()
{
int a,b;
	cout <<"Enter the value of a and b\n";
	cin >>a>>b;
	cout <<"The values of a and b are"<<a <<"\t"<<b<<"\n";
	int sum = a+b;
	cout <<"The sum of the numbers is :" <<sum <<"\n";
			if (sum>20)
			{
				cout <<"Th sum is greater than 20";
			}
			else 
			{
				if ((sum<20)&&(sum>10))
				{
					cout<<"Sum is greater than 10 and less than 20";
				}
				else
				{
					cout<<"The sum is less than 10";
				}
			}
			
	return 0;
}