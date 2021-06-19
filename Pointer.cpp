#include <iostream>
using namespace std;
int main()
{
long int num = 10;
long int *ptr;
cout <<"Number's address is :" <<&num <<"\n";
ptr = &num;
cout <<"Pointer's address is : " <<ptr <<"\n";
cout <<"The size of the pointer is " <<sizeof(ptr) <<"\n";
cout <<"The pointer's value is " <<ptr <<"\n";
cout <<"The value stored in the pointer is " <<*ptr <<"\n";
return 0;
}
