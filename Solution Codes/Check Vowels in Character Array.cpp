#include<iostream>

using namespace std;

int main()
{
   char st[50];
   cout<<"Enter a string: ";
   cin.getline(st,50);
   for(int i=0;i<50;i++){
       if(st[i]=='a' || st[i]=='e' || st[i]=='i'|| st[i]=='o' || st[i]=='u' || st[i]=='A' || st[i]=='E' || st[i]=='I'|| st[i]=='O' || st[i]=='U' ){
           cout<<st[i]<<" ";
       }
   }
    return 0;
}
