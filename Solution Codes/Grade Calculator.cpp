#include<iostream>

using namespace std;
int main() {
	float marks;
	cout << "Enter the obtain marks of the candidate  : ";
	cin >> marks;
	float TM;
	cout << "Enter the total marks of the candidate : ";
	cin >> TM;
	float percentage = 0;
	percentage = (marks / TM) * 100.0;
	if (percentage < 25)
	{
		cout << "F" << endl;
	}
	else if (percentage >= 25 && percentage < 45)
	{
		cout << "E" << endl;
	}
	else if (percentage >= 45 && percentage < 50)
	{
		cout << "D" << endl;
	}
	else if (percentage >= 50 && percentage < 60)
	{
		cout << "C" << endl;
	}
	else if (percentage >= 60 && percentage < 80)
	{
		cout << "B" << endl;
	}
	else if (percentage > 80)
	{
		cout << "A" << endl;
	}
	else
	{
		cout << "Data is not valid ...... " << endl;
	}

	system("pause");
	return 0;
}