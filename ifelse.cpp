#include <iostream>
using  namespace std;
int main()
{
int a,b,sum;
	cout <<"Enter the value of a and b\n";
	cin >>a>>b;
	cout <<"The values of a and b are"<<a <<"\t"<<b<<"\n";
		sum=a+b;
		cout <<"The sum of a and b is "<<sum<<"\n";
			if (sum>20)
			{
				cout <<"The sum is greater than 20\n";
			}
			else if (sum<20)
			{
				cout <<"The sum is less than 20\n";
			}
return 0;
}