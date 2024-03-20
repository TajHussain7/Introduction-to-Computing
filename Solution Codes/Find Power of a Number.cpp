#include <iostream>
using namespace std;

int main() 
{
    int base=0,exponent=0,power=1;
    cout<<"The Power of an integer: \n"<<endl;
    cout<<"Enter the Base Value: ";
    cin>>base;
    cout<<"Enter the Exponent value: ";
    cin>>exponent;
    for(int i=1;i<=exponent;i++){
        power=power*base;
    }
    cout<<"The Power of "<<base<<"^"<<exponent<<" is "<<power<<endl;
    return 0;
}