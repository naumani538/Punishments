#include<iostream>
#include<conio.h>
using namespace std;
void Grade(int n)
{
	if(n >= 80)
		cout<<"Grade A,Passed.";
	else if(n >= 60 && n <= 79 )
		cout<<"Grade B,Passed.";
	else if ( n >= 50 && n<= 59 )
		cout<<"Grade C.Passed.";
	else if( n >=40 && n>= 49 )
		cout<<"Grade D.Passed.";
	else
		cout<<"Grade F,Failed.";		
	
}

int main ()
{
	int number;
	cout<<"Enter Marks: ";
	cin>>number;
	Grade(number);
	return 0;
}