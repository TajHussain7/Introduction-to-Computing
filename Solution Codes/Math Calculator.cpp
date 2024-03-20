#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << "Enter two operands :" << " ";
	cin >> num1 >> num2;
	char op;
	cout << "Enter an operator(+, - , *) :" << " ";
	cin >> op;
	if (op == '+')
	{
		cout << num1 << "+" << num2 << "="<<" "<<num1+num2 << endl;
	}
	else if (op == '-')
	{
		cout << num1 << "-" << num2 << "=" <<" "<<num1-num2<< endl;
	}
	else if (op == '*')
	{
		cout << num1 << "*" << num2 << "=" <<" "<<num1*num2<< endl;
	}
	else 
	{
		cout << "NO DATA IS GIVEN" << endl;
	}
	return 0;
}