#include <iostream>
using namespace std;

int main()
{
int a=1;
cout <<"The value of a is"<<a++<<"\n"; //post increment 
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";

a=1;
cout <<"The value of a before increment is"<<a<<"\n";
cout <<"The value of a is"<<++a<<"\n";//pre increment 
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";

a=1;
cout <<"The value of a before decrement is"<<a<<"\n";
cout <<"The value of a is"<<a--<<"\n"; //post decrement 
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";

a=1;
cout <<"The value of a before decrement is"<<a<<"\n";
cout <<"The value of a is"<<--a<<"\n"; //pre decrement 
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";


return 0;
}