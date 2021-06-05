#include <iostream>
using namespace std;
int add(int a, int b) //function with arguments
{
	int c;
    c=a+b;
} 
int main()
{
	int sum;
	sum= add(5,4); //caling function with arguments
	cout <<"Sum of a and b is"<<sum;
return 0;
}