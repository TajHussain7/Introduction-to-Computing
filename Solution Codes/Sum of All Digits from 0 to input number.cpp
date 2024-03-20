#include<iostream>

using namespace std;
int main() {
	int num;
	cout << "Enter a number : ";
	cin >> num;
	int m;
	int sum = 0;
	while (num > 0) {
		m = num % 10;
		sum = sum + m;
		num = num / 10;
	}
	cout << "The sum of all digits : "<<sum<<endl;

	return 0;
}