#include<iostream>
using namespace std;
int main() {
	char str[100];
	cout << "Enter a string: ";
	cin.get(str, 100);
	char fr = '/0';
    int count = 0;
	cin >> fr;
	for (int i = 0; i < 100; i++) {
		if (str[i] == fr) {
			count++;
		}
	}
	cout << "Frequency of " << fr<<" = "<< count << endl;


	return 0;
}