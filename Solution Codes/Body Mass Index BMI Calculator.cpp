#include<iostream>
using namespace std;
int main() {
	float weight;
	float height;
	cout << "Please Enter your Weight in pounds :" << " ";
	cin >> weight;
	cout << "Please Enter your Height in inches :" << " ";
	cin >> height;
	float BMI = 0;
	BMI = (weight * 703) / (height * height);
	cout << "Your BMI is :" << BMI << endl;
	if (BMI < 18.5) {
		cout << "Underweight" << endl;
	}
	else if (BMI >= 18.5 && BMI < 24.9)
	{
		cout << "Healthy Weight" << endl;
	}
	else if (BMI >= 25 && BMI < 29.9)
	{
		cout << "Overweight" << endl;
	}
	else if (BMI >= 30 && BMI > 30)
	{
		cout << "Obese" << endl;
	}

	return 0;
}