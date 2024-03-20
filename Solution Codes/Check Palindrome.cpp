#include<iostream>

using namespace std;
int main() {
	int num;
	cout << "Enter a number : ";
	cin >> num;
	int rev=0 , m;
	int sum = num;
	while (num!=0) {
		m = num % 10;
		rev = rev*10+m;
		num = num / 10;
	}

	if (rev == sum) {
		cout << "Number is a Palindrome. " << endl;
	}
	else {
		cout << num << "Number  is not a Palindrome. " << endl;
	}







	return 0;
}



