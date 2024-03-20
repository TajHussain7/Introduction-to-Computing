#include<iostream>

using namespace std;
int main() {
	int num1;
	int num2;
	cout << "Enter the value of num1 : ";
	cin >> num1;
	cout << "Enter the value of num2 : ";
	cin >> num2;
	if (num1 > num2)
	{
		cout << "num1 is greater then num2 " << endl;
	}
	else
	{
		cout << "num2 is greater then num1 " << endl;
	}

	system("pause");
	return 0;
}