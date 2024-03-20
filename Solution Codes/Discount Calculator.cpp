#include<iostream>

using namespace std;
int main() {
	int EQ;
	cout << "Enter quantity : ";
	cin >> EQ;
	int EP;
	cout << "Enter price per item : ";
	cin >> EP;
	cout << endl;
	int TE = 0;
	TE = EQ * EP;
	cout << "Total expense is RS." << TE << endl;
	int Discount = 0;
	Discount = TE - (TE * 0.15);
	cout << endl;
	if (TE > 10000)
	{
		cout << " After Discounted ; the final  price is : " << Discount << endl;
	}
	else {
		cout << "Final Price is :"<< TE << endl;
	}
	cout << endl;


	system("pause");
	return 0;
}