#include<iostream>
using namespace std;
int main() {
	int rollnumber;
	cout << "Enter the student roll number :";
	cin >> rollnumber;
	int phy, chm, IT;
	cout << "Enter the number of Physics , Chemistry and IT :";
	cin >> phy >> chm >> IT;
	cout << endl;
	int sum = 0;
	sum =sum+ phy + chm + IT;
	float percent = 0;
	percent = (sum / 3);
	cout << "Roll Number :" << rollnumber << endl;
	cout << "Marks in Physics :" << phy << endl;
	cout << "Marks in Chemistry :" << chm << endl;
	cout << "Marks in IT: " << IT << endl;
	cout << "Total Marks ="<<" " << sum << endl;
	cout << "Percentage =" <<" "<< percent << endl;
	if(percent>=90)
	{
		cout << "Division = First" << endl;
	}
	else if(percent>79 && percent<=89)
	{
		cout << "Division = Second" << endl;
	}
	else if(percent>68 && percent<=78)
	{
		cout << "Division = Third" << endl;
	}
	else if(percent>57 && percent<=67)
	{
		cout << "Division = Forth" << endl;
	}
	else 
	{
		cout << "Below the average " << endl;
	}
	system("pause");
	return 0;
}
