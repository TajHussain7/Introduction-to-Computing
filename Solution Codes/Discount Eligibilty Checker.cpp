#include<iostream>

using namespace std;
int main() {
	int EQ;
	cout << "Enter the quantity :";
	cin >> EQ;
	cout << endl;
	int UC;
	UC = 100;
	int TC;
	TC = EQ * UC;
	int discount = 0;
	discount = TC - (TC * 0.1);
	cout << endl;
	if (TC > 10000)
	{
		cout << "Your are eligible for the discount " << endl;
		cout << "And " << endl;
		cout<<"The price after discount is RS. " << discount << endl;
	}
	else
	{
		cout << "Your are not eligible for discount . " << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}