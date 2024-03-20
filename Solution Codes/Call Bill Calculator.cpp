#include<iostream>

using namespace std;
int main() {
	int TC;
	int bill = 0;
	cout << "Enter number of calls : ";
	cin >> TC;
	bill = 200;
	if (TC <= 100)
	{
		cout << "Your bill is  RS.  " << bill << endl;
	}
	else if (TC <= 150)
	{
		cout << "Your bill is RS.   " << bill + (50 * 0.60) << endl;
	}
	else if (TC <= 200)
	{
		cout << "Your bill is RS.   " << bill + (100 * 0.50) << endl;
	}
	else if (TC < 200)
	{
		cout << "Your bill is RS.   " << bill + (100 * 0.40) << endl;
	}
	else
	{
		cout << "Your given data is up to rage .....****" << endl;
	}

	system("pause");
	return 0;
}