//Tajamal Hussain#Taj
#include<iostream>

using namespace std;
int main() { 

	cout << "Choose a number from 1 to 8. " << endl;
	char answer;
	cout << "Is it less then 5?  (y/n) :";
	cin>>answer;
	if (answer == 'y') 
	{  
		cout << "Is it less then 3? (y/n) :";
			cin >> answer;
			if (answer == 'y') 
			{
				cout << "Is it less then 2? (y/n) :";
				cin >> answer;
				if (answer == 'y') 
				{
					cout << "Your number is 1." << endl;
				}
				else 
				{
					cout << "Your number is 2. " << endl;
				}
			}

	    else
		{
			cout << "Is it less then 4? (y/n) :";
			cin >> answer;
			if (answer == 'y')
			{
				cout << "Your number is 3." << endl;
			}
			else
			{
				cout << "Your number is 4. " << endl;
			}
		}
	}
	else
	{
		cout << "Is it less then 7? (y/n) :";
		cin >> answer;
		if (answer == 'y')
		{
			cout << "I is less then 6? (y/n) :";
			cin >> answer;
			if (answer == 'y') 
			{
				cout << "Your number is 5." << endl;
			}
			else 
			{
				cout << "Your number is 6." << endl;
			}
		}
		else
		{
			cout << "Is it less then 8? (y/n) :";
			cin >> answer;
			if (answer == 'y') 
			{
				cout << "Your number is 7." << endl;
			}
			else 
			{
				cout << "Your number is 8." << endl;
			}
		}
	}


	return 0;
}