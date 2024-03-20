#include<iostream>

using namespace std;
int main() {
	int salary;
	cout << "Enter the salary of Employee : ";
	cin >> salary;
	int YS;
	cout << "Enter the year of service : ";
	cin >> YS;
	int bonus = 0;
	bonus = salary * 0.05;
	if (YS > 5)
	{
		cout << "The bonus of this employee is " << bonus << endl;
		cout << "Now " << endl;
		cout << "The total salary after bonus is : " << bonus + salary << endl;
		cout << endl;
	}
	else
	{
		cout << "He/She is not eligible for bonus....... " << endl;
		cout << endl;
	}
	


	system("pause");
	return 0;
}