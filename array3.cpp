///Addition of the array elements 
#include <iostream>
using namespace std;
int main()
{
int array[]={1,2,3,4,5,6};
int sum = 0;
int i;
for (i=0;i<6;i++)
{
sum+=array[i];
}
cout <<"The sum of the array elements is : " <<sum;
return 0;
}