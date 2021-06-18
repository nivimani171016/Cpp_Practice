#include<iostream>
using namespace std;
int main()
{
int a=2,b=1,c=3;
if ((a>b)&&(a>c))
{
cout<<"A is greater than B and c";
}
else 
{
	if ((b>a)&&(b>c))
	{
		cout <<"B is greater than A and C ";
	}
	else
	{
		cout <<"C is greater";
	}
}
return 0;
}
