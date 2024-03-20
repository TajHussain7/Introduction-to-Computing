#include<iostream>

using namespace std;

int main()
{
   int array[10];
   cout<<"Enter the integers: ";
   int i , j , k;
   for(i=0;i<10;i++){
       cin>>array[i];
   }
   cout<<"Result is: "<<endl;
   for(int i=0;i<10;i++){
       for(int j=i+1;j<10;j++){
           if(array[i]==array[j]){
               cout<<array[i]<<" ";
           }
       }
   }
    return 0;
}
