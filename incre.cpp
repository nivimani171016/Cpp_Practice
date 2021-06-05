#include <iostream>
using namespace std;

int main()
{
int a=1;
cout <<"The value of a is"<<a++<<"\n";
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";

a=1;
cout <<"The value of a before increment is"<<a<<"\n";
cout <<"The value of a is"<<++a<<"\n";
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";

a=1;
cout <<"The value of a before decrement is"<<a<<"\n";
cout <<"The value of a is"<<a--<<"\n";
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";

a=1;
cout <<"The value of a before decrement is"<<a<<"\n";
cout <<"The value of a is"<<--a<<"\n";
cout <<"The value of a now is"<<a<<"\n";
cout <<"\n";


return 0;
}