#include<iostream>

using namespace std;
int main() {
	char array[5];
	cout << "Fruit: ";
	cin >> array;
	cout << "Swapped " << endl;
	int temp = 0;
	for (int i = 0; i < 5; i++) {
			temp = array[0];
			array[0] = array[4];
			array[4] = temp;
			cout << array[i] << " ";
	}
	cout << endl;









	return 0;
}