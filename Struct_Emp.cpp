#include <iostream>
using namespace std;
struct Employee
{
string name;
int address;
string designation;
int salary;
};
int main()
{
cout <<"The following contains the information of the employee :- \n";
struct Employee emp;
emp.name = "Gosh";
emp.address = 156;
emp.designation = "Trainer";
emp.salary = 15000;
cout <<"The name of the employee is : " <<emp.name <<"\n";
cout <<"The address of the employee is : " <<emp.address <<"\n";
cout <<"The designation is : " <<emp.designation <<"\n";
cout <<"The salary is : " <<emp.salary <<"\n";
return 0;
}

