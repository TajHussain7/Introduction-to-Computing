#include<iostream>

using namespace std;
int main() {
	char str[100];
	cout << "Enter the string: ";
	cin >> str;
	char search = '/0';
	cout << "Character to search: ";
	cin >> search;
	int i;
	for (i = 0; i < 100; i++) {
		if (str[i] == search) {
			cout << "Position of the character: " << i << endl;
			break;
		}
		else {
			cout << "Character not found. " << endl;
		}
	}








	return 0;
}