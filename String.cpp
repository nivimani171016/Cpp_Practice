#include <iostream>
#include <string.h> //needed when string is used but does function without this function too
using namespace std;
int main()
{
char name[]="Cpp";
cout <<name <<"\n";
string surname; //string is a datatype 
cout <<"Enter the surname :";
cin >>surname;
//getline(cin,surname); //does the same function by cin
cout <<surname <<"\n";
cout <<name <<"\t" <<surname;
return 0;
}
