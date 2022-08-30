#include<iostream>
#include<conio.h>
using namespace std;

int isEven(int arr[])
{
	int even = 0;
	for ( unsigned int i = 0 ; i < 5 ; i++ )
	{
		if ( arr[i]%2 == 0 )
		{
			even++;
		}
	}
	return even;
}

int main()
{
	int numarr[5],num;
	cout<<"Enter five numbers: "<<endl;
	for( unsigned int i = 0 ; i < 5 ; i++ ){
		cin>>numarr[i];
	}
	num = isEven(numarr);
	if( num == 5 ){
		cout<<"All the numbers entered by user are even.";
	}
	else 
		cout<<"There were "<<num<<" Even numbers entered by user.";
	getche();
}