#include <iostream>
using namespace std;

int main()
{
int x,y;
	cout <<"Enter the value of y between 0 to 40\n";
	cin >>y;
	cout <<"The value of y is "<<y <<"\n";
		x=y/10;
		switch (x)
		{
			case 0:
			cout <<"\nThe value is in the range of 0 to 9\n";
			break;
			case 1:
			cout <<"the value is in the range of 10 to 19\n";
			break;
			case 2:
			cout <<"The value is in the range of 20 to 29\n";
			break;
			case 3:
			cout <<"The value is in the range of 30 to 39\n";
			break;
			default:
			cout <<"\nThe value is not in the range\n";
		}
	return 0;
}