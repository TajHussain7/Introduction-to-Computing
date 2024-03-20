#include<iostream>

using namespace std;

int main()
{
   int array[10];
   int temp=0;
   cout<<"Enter the integers: ";
   for(int i=0;i<10;i++){
       cin>>array[i];
   }
   cout<<"Integers are in Ascending Order: "<<endl;
   int i,j;
   for(i=0;i<10;i++){
       for(j=0;j<10-i;j++){
           if(array[j]<array[j+1]){
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
       cout<<array[j]<<" ";
   }
    return 0;
}
