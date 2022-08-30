#include<iostream>
#include<conio.h>
using namespace std;

struct timer
{
	int hours,minutes,seconds;
};

int main()
{
	timer a,b;
	int tHours,tMinutes,tSeconds;
	tHours = tMinutes = tSeconds =0;
	cout<<"Hours 1: ";
	cin>>a.hours;
	cout<<"Minutes 1: ";
	cin>>a.minutes;
	cout<<"Seconds 1: ";
	cin>>a.seconds;
	cout<<"Hours 2: ";
	cin>>b.hours;
	cout<<"Minutes 2: ";
	cin>>b.minutes;
	cout<<"Seconds 2: ";
	cin>>b.seconds;
	
	tHours = a.hours + b.hours;
	tMinutes = a.minutes + b.minutes;
	tSeconds = a.seconds + b.seconds;
	if(tSeconds > 60)
	{
		tMinutes =tMinutes + 1;
		tSeconds%=60;
	}
	if(tMinutes > 60)
	{
		tHours = tHours + 1;
		tMinutes%=60;
	}
	cout<<"The Total time in hh:mm:ss format is ";
	cout<<tHours<<":"<<tMinutes<<":"<<tSeconds;
}