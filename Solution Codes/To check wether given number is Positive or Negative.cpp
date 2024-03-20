#include<iostream>

using namespace std;
int main() {
	int num1 ;
	cout << "Enter a number : ";
	cin >> num1;
	cout << endl;
	if (num1 >0)
	{
		cout<< "INPUT  : " << num1 << endl;
		cout << "AND " << endl;
	                     cout<< "OUTPUT : " << num1 << endl;
	}
	else
	{
		cout<< "INPUT : " << num1 << endl;
		cout << "AND " << endl;
		cout<<"OUTPUT : " <<-(num1) << endl;
	}
	cout << endl;




	system("pause");
	return 0;
}