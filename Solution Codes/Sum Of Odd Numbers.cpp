#include <iostream>
using namespace std;

int main() 
{
    int sum=0;
    cout<<"The odd numbers are: ";
    for(int i=1;i<=49;i++){
        if(i%2!=0){
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<"\n \nThe sum of odd integers: "<<sum<<endl;
    return 0;
}