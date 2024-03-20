#include<iostream>

using namespace std;
int main() {
	char str[30];
	cout << "Enter a string: ";
	cin.get(str, 30);
	char replaced, placed;
	cout << "Enter the character to be replaced = ";
	cin >> replaced;
	cout << "Enter the character to be place = ";
	cin >> placed;
	for (int i = 0; i < 30; i++) {
		if (str[i] == replaced) {
			str[i] = placed;
		}
		cout << str[i];
	}
	cout << endl;


	return 0;
}
