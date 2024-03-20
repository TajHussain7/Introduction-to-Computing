#include<iostream>

using namespace std;
int main() {
	int length;
	int breadth;
	cout << "Enter the value of length : ";
	cin >> length;
	cout << "Enter the value of breadth : ";
	cin >> breadth;
	if(length==breadth)
	{
		cout << "It is a square ." << endl;
	}
	else {
		cout << "It is not a sqaure . " << endl;
	}


	system("pause");
	return 0;
}