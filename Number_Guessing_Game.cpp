#include <iostream>
using namespace std;

int main() {

	int secret;
	int input;
	int trying=0;
	string level;

	cout<<"Welcome! This is a game about guessing a correct number.\n";

	cout<<"There have 3 level: Hard | Medium | Easy\n";

	do {
		cout<<"Select one of the following level: ";
		cin>>level;
		cout<<endl;
	} while(level!="Hard" && level!="Medium" && level!="Easy");
	if(level=="Hard")
	{
		secret=71;
	}
	else if(level=="Medium")
	{
		secret=17;
	}
	else if(level=="Easy")
	{
		secret=67;
	}
	do
	{
		cout<<"Suppose a correct number: ";
		cin>>input;
		cout<<endl;
		trying+=1;

		if(input==secret)
		{
			cout<<"Congratulations! You have won☆";
			trying=77;
		}
		else if(input>secret)
		{
			if(level=="Hard" && input>85 && trying!=77 && trying!=7)
			{
				cout<<" Too high!\n";
			}

			else if (level=="Hard" && input>secret && trying!=77 && trying!=7)
			{
				cout<<"High\n";
			}
			else if(level=="Medium" && input>20 && trying!=77 && trying!=7)
			{
				cout<<"Too high!\n";
			}
			else if(level=="Medium" && input>secret && trying!=77 && trying!=7)
			{
				cout<<"High\n";
			}
			else if(level=="Easy" && input>70 && trying!=77 && trying!=7)
			{
				cout<<"Too high!\n";
			}
			else if(level=="Easy" && input>secret && trying!=77 && trying!=7)
			{
				cout<<"High\n";
			}
		}
		else if(input<secret)
		{
			if(level=="Hard" && input<60 && trying!=77 && trying!=7)
			{
				cout<<" Too low\n";
			}
			else if(level=="Hard" && input<secret && trying!=77 && trying!=7)
			{
				cout<<"Low\n";
			}
			else if(level=="Medium" && input<10 && trying!=77 && trying!=7)
			{
				cout<<"Too low\n";
			}
			else if(level=="Medium" && input<secret && trying!=77 && trying!=7)
			{
				cout<<"Low\n";
			}
			else if(level=="Easy" && input<55 && trying!=77 && trying!=7)
			{
				cout<<"Too low\n";
			}
			else if(level=="Easy" && input<secret && trying!=77 && trying!=7)
			{
				cout<<"Low\n";
			}
		}
		if(level=="Medium" && trying>=4 && trying!=77 && trying!=7)
		{
			cout<<"It'among 10-25\n";
		}
		else if(level=="Easy" && trying>=3 && trying!=77 && trying!=7)
		{
			cout<<"It's among 62-69\n";
		}
	}
	while(trying!=7 && trying!=77);

	switch(trying)
	{
	case 7:
		if(level=="Hard" || level=="Medium" || level=="Easy")
			cout<<"Game over ^-^\n";
		cout<<"The number is: "<<secret;

		break;
	}

	return 0;
}