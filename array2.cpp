#include <iostream>
using namespace std;
int main()
{
int array[3]={3,5,7};

int diff=array[2]-array[1];
int diff1=array[0]-diff;
cout <<"The sum of the element is "<<diff<<"\n";
cout <<"The difference of the element is "<<diff1<<"\n";
return 0;
}