#include<iostream>

using namespace std;
int main() {
	int num, i ;
	cout << "Enter  a number : ";
	cin >> num;
	cout << "Multiplication for the " << num << " is " << endl;
	int multiplication = 1;
	for (i = 1; i <= 10 ; i++) {
		multiplication = num * i;

		cout << num << " * " << i << " = " << multiplication << endl;

	}

	return 0;
}