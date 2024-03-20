#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Enter coefficient a :" << " ";
	cin >> a;
	cout << endl;
	cout << "Enter coefficient b :" << " ";
	cin >> b;
	cout << endl;
	cout << "Enter coefficient c :" << " ";
	cin >>  c;
	cout << endl;
	int formula = 0;
	formula = b * b - 4 * a * c;
	if (formula >= 0)
	{
		cout << "Roots are positive , real and distinct" << endl;
	}
	else if (formula < 0)
	{
		cout << "Roots are negative and distinct" << endl;
	}
	else
	{
		cout << " Roots are undefined" << endl;
	}


	return 0;










	return 0;
}
