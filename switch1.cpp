#include <iostream>
using namespace std;

int main()
{
int x,y;
	cout <<"Enter the age of the employee\n";
	cin >>y;
	cout <<"The age of the employee is "<<y<<"\n";
		x=y/10;
		switch (x)
		{
			case 0:
			cout <<"Under age \n";
			break;
			case 1:
			cout <<"Under age \n";
			break;			
			case 2:
			cout <<"The age of the employee is between 20 to 29 years\n";
			break;
			case 3:
			cout <<"The age of the employee is between 30 to 39 years\n";
			break;
			case 4:
			cout <<"The age of the employee is between 40 to 49 years\n";;
			break;
			case 5:
			cout <<"The age of the employee is between 50 to 59 years\n";
			break;
			default:
			cout <<"\nThe age of the employee is not between 20 and 60 years of age";
		}
 	return 0;
}