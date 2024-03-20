#include<iostream>

using namespace std;
int main() {
	int num1;
	cout << "Enter a number :" << " ";
	cin >> num1;
	if (num1 % 2 == 0)
	{
		cout << num1<<" " << "is an even number ." << endl;
	}
	else
	{
		cout << num1 <<" " << "is an odd number ." << endl;
	}

	return 0;
}
