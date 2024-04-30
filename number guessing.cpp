#include <cstdlib>
#include<ctime>
#include <iostream>
using namespace std;
int main() 
{
	int i,randnum,guess,lowlim,uplim;
	cout<<"Enter the lower limit: ";
	cin>>lowlim;
	cout<<"Enter the upper limit: ";
	cin>>uplim;
	if(uplim>lowlim)
	{
		srand(time(0));
		int range=uplim-lowlim+1;
		randnum=(rand()%range)+lowlim;
		cout<<"You have 5 chances\n";
		for(i=0;i<5;i++)
		{
			cout<<"Enter a number : ";
			cin>>guess;
			if(guess==randnum)
			{
				cout<<"You have guessed the correct number\n";
				break;	
			}	
			else if((randnum-guess==10)||(randnum-guess==-10))
			{
				cout<<"Your guess is too close\n";
				if(i==4)
					cout<<"The correct number : "<<randnum;
			}
			else if(randnum>guess)
			{
				cout<<"Your guess is lesser than the number\n";
				if(i==4)
					cout<<"The correct number : "<<randnum;
			}
			else if(randnum<guess)
			{
				cout<<"Your guess is higher than the number\n";
				if(i==4)
					cout<<"The correct number : "<<randnum;
			}
		}
	}
	else
		cout<<"Invalid input. Try again";
	return 0;
}
