#include <iostream>
using namespace std;

int main()
{
int m1,m2,m3;
cout <<"Enter the mark of student 1: ";
cin >>m1;
cout <<"\n"<<"Enter the mark of student 2: ";
cin >>m2;
cout <<"\n Enter the mark of student 3:";
cin >>m3;
	if ((m1>m2)&&(m1>m3))
	{
		cout <<"\n The student 1 has scored the highest mark";
	}
	else 
	{
		if ((m1<m2)&&(m2>m3))
		{
			cout <<"\n The student 2 has scored the highest mark";
		}
		else
		{
			cout <<"\nThe student 3 has csored the highest mark";
		}
	}
	
	if (m1==m2)
	{
		cout <<"\n The student 1 and 2 has scored equal marks";
	}
	else
	{
		cout <<"\n The student 1 and 3 has scored equal marks";
	}
	
return 0;
}