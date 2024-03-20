#include<iostream>

using namespace std;
int main() {
	int BS;
	cout << "Enter basic salary of Employee :" << " ";
	cin >> BS;
	if (BS < 2000)
	{
		cout << "The house rent is :"<<" "<< (0.025 * BS) << endl;
		cout << "And" << endl;
		cout << "The dearness allowance is :"<<" "<< (0.85 * BS) << endl;
	}
	int HR = 700;
	if (BS >= 2000)
	{
		cout << "The house rent will be :"<<" "<< HR << endl;
		cout << "And" << endl;
		cout << "The dearness allowance will be :"<<" "<< (0.9 * BS) << endl;
	}
	cout << endl;


	system("pause");
	return 0;
}