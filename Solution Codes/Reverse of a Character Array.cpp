#include<iostream>

using namespace std;

int main()
{
    char temp;
   char st[10];
   cout<<"Enter a Character Array: ";
   cin>>st;
   for(int i=9-1;i>='\0';i--){
       cout<<st[i];
   }
    return 0;
}
