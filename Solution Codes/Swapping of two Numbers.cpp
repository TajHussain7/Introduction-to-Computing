#include <iostream>
using namespace std;

int main() 
{
    int num1=0;
    int num2=0;
    cout<<"Enter the first Number: ";
    cin>>num1;
    cout<<"Enter the second Number: ";
    cin>>num2;
    cout<<"Before swaping, the numbers are: \n"<<num1<<" "<<num2<<endl;
    int temp=0;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After Swaping, the numbers are: \n"<<num1<<" "<<num2<<endl;
    return 0;
}