#include<iostream>

using namespace std;
int main() {
	int a, b, c;
	cout << "Enter the age of a : ";
	cin >> a;
	cout << "Enter the age of b : ";
	cin >> b;
	cout << "Enter the age of c : ";
	cin >> c;
	if (a > b && a > c)
	{
		cout << "a is older , b and c is younger . " << endl;
	}
	if (b > a && b > c)
	{
		cout << "b is older , a and c is younger . " << endl;
	}
	if (c > a && c > b)
	{
		cout << "c is older , a and c is younger . " << endl;
	}

	cout << endl;

	system("pause");
	return 0;
}