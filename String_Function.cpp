//string librray function
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char str1[]={"Programming"};
	char str2[]={"Concepts"};
	cout <<str1 <<"\t" <<str2;
	cout <<"\nUse of the strncpy() function \n";
	string copy = strncpy(str1,str2,3); //strncpy (1st string, 2nd string, no. of charcetr to be copied from 2rd to 1st string)
	cout <<copy;
	string copy1 = strcpy(str1,str2);
	cout <<"\n" <<copy1;
	cout <<"\nThe string 1 now is :" <<str1 <<"\n";
	cout <<"The string 2 is now :" <<str2;
	char str3[]="Programming";
	cout <<"\nUse of the strncmp() function \n";
	int cmp = strncmp(str1,str3, 3); //strcmp(char1, char2)
	cout <<cmp;
	cout <<"\nUse of the strnlen() function \n";
	int len = strlen(str3); //strnlen(char1, no.of char)
	cout <<len;
	cout <<"\nUse of the strcat() function \n";
	string con = strcat(str3, str1);
	cout <<"\n" <<con;
	return 0;
}
