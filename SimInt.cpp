//First C program //Comments
#include<iostream>
using namespace std;
int main()
{
float p,rate,time;
cout<<"Enter the principal amount : ";
cin >>p;
cout<<"Enter the rate :";
cin >>rate;
cout <<"Enter the time period : ";
cin >>time;
cout <<"The simple interest is:";
float SI = p*rate*time;
cout <<SI;

return 0;
}
