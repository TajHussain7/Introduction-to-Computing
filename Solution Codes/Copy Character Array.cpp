#include<iostream>

using namespace std;
int main() {
	char array[20];
	cout << "Enter the string? ";
	cin.get(array, 20);
	cout << endl;
	cout << "Original: ";
	int i;
	for (i = 0; i < 20; i++) {
		cout << array[i];
	}
	char array2[20];
	for (int i = 0; i< 20; i++) {
		array2[i] = array[i];
	}
	cout <<endl<< "Copied: ";
	for (int i = 0; i < 20; i++) {
		cout << array2[i];
	}
	cout << endl;
















	return 0;
}