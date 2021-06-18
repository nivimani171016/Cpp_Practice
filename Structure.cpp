#include <iostream>
using namespace std;
struct Student
{
int eng;
int mat;
int sci;
};
int main()
{
struct Student stu;
stu.eng=56;
stu.mat=86;
stu.sci=75;
int total = stu.eng+stu.mat+stu.sci;
cout <<"The total is : " <<total <<"\n";
return 0;
}