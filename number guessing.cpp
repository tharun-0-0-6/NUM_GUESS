#include <cstdlib>
#include<ctime>
#include <iostream>
using namespace std;
int main() 
{
	int randnum,diff,guess,lowlim,uplim;
	cout<<"Enter the lower limit: ";
	cin>>lowlim;
	cout<<"Enter the upper limit: ";
	cin>>uplim;
	srand(time(0));
	int range=uplim-lowlim+1;
	randnum=(rand()%range)+lowlim;
	cout<<"Enter the difficulty level (1/2/3) : ";
	cin>>diff;
	if(diff==1)
	{
		cout<<"You have THREE chances\n   First chance\n";
		cout<<"Enter the number : ";
		cin>>guess;
		if(guess==randnum)
		{
			cout<<"-----You have guessed the correct number-----";
		}
		else
		{
			cout<<".....The number you guessed is wrong.....\n  Second chance\n";
			cout<<"Enter the number : ";
			cin>>guess;
			if(guess==randnum)
			{
				cout<<"-----You have guessed the correct number-----";
			}
			else
			{
				cout<<".....The number you guessed is wrong.....\n  Third chance\n";
				cout<<"Enter the number : ";
				cin>>guess;
				if(guess==randnum)
				{
					cout<<"-----You have guessed the correct number-----";
				}
				else
				{
					cout<<".....The number you have guessed is wrong..... \nYour turn is over";
					cout<<"\nThe correct number : "<<randnum;
				}
			}
		}
	}
	else if(diff==2)
	{
		cout<<"You have TWO chances\n   First chance\n";
		cout<<"Enter the number : ";
		cin>>guess;
		if(guess==randnum)
		{
			cout<<"-----You have guessed the correct number-----";
		}
		else
		{
			cout<<".....The number you guessed is wrong.....\n  Second chance\n";
			cout<<"Enter the number : ";
			cin>>guess;
			if(guess==randnum)
			{
				cout<<"-----You have guessed the correct number-----";
			}
			else
			{
				cout<<".....The number you guessed is wrong.....\n  Your turn is over";
				cout<<"\nThe correct number : "<<randnum;
			}
		}
	}
	else if(diff==3)
	{
		cout<<"You have ONE chance\n";
		cout<<"Enter the number : ";
		cin>>guess;
		if(guess==randnum)
		{
			cout<<"-----You have guessed the correct number-----";
		}
		else
		{
			cout<<".....The number you guessed is wrong.....\n  Your turn is over";
			cout<<"\nThe correct number : "<<randnum;
		}
	}
	return 0;
}

