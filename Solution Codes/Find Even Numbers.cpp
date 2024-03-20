#include <iostream>
using namespace std;

int main() 
{
    int array[10];
    cout<<"Enter the first ten integers: ";
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    cout<<"The Even Numbers are: ";
    for(int i=0;i<10;i++){
        if(array[i]%2==0){
            cout<<array[i]<<" ";
        }
    }
    
    return 0;
}