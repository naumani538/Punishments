#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

struct employee
{
	int experience,age;
	char name[50],degree[50];
};

int main ()
{
	employee a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	employee a[10];
	setw(100);
	for ( unsigned int i = 0 ; i < 2 ; i++ )
	{
		cout<<"Employee Name: ";
		cin.getline(a[i].name,50);
		cout<<"Employee Degree: ";
		cin.getline(a[i].degree,50);
		cout<<"Employee Age: ";
		cin>>a[i].age;
		cout<<"Employee Experience: ";
		cin>>a[i].experience;
	}
	cout<<endl;
	for(unsigned int i = 1 ; i <= 50 ; i++)
		cout<<"-";
	cout<<endl;
	for(unsigned int i = 0 ; i < 2 ; i++)
	{
		cout<<a[i].name<<"\t"<<a[i].degree<<"\t"<<a[i].experience<<"\t"<<a[i].age<<endl;
	}
	for(unsigned int i = 1 ; i <= 50 ; i++)
		cout<<"-";
}