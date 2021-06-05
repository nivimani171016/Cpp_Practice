#include<iostream>
using namespace std;
int main()
{
int i,j;
int a[2][2],b[2][2];
cout <<"Enter the elements of the first array: \n";
for (i=0;i<2;i++)
{
	for (j=0;j<2;j++)
	{
		cin >>a[i][j];
	}
}
cout <<"Enter the elements of the second array: \n";
for (i=0;i<2;i++)
{
	for (j=0;j<2;j++)
	{
		cin >>b[i][j];
	}
}
cout <<"The first array is : \n";
for (i=0;i<2;i++)
{
	for (j=0;j<2;j++)
	{
		cout <<a[i][j]<<"\t";
		cout <<"\n";
	}
}
cout <<"The second array is : \n";
for (i=0;i<2;i++)
{
	for (j=0;j<2;j++)
	{
		cout <<b[i][j]<<"\t";
		cout <<"\n";
	}
}
return 0;
}


