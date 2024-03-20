#include <iostream>
using namespace std;

int main() 
{
    int array[7];
    int sum=0,avg=0;
    cout<<"Enter Input: ";
    for(int i=0;i<7;i++){
        cin>>array[i];
    }
    for(int i=0;i<7;i++){
        sum+=array[i];
    }
    avg=sum/7;
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Average is: "<<avg<<endl;
    return 0;
}