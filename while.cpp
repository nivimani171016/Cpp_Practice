
#include <iostream>
using namespace std;
int main()
{
int x=0;
int y=0;
cout <<"The value of y is";
do
{
y=x+y;
x++;
}
while (x<=10);
cout <<y; //sum of numbers from 0 to 10 
return 0;
}
