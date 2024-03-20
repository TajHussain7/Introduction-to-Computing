#include<iostream>

using namespace std;

int main()
{
    char array[50];
    cin.getline(array,50);
    int i=0;
    while(array[i]!='\0'){
        i++;
    }
    cout<<i;
    return 0;
}

