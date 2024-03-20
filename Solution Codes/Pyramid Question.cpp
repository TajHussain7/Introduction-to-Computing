#include<iostream>

using namespace std;

int main()
{
    for(int i=1;i<=5;i++){
        if(i==2){
            cout<<"  ";
        }
        if(i==3){
            cout<<"    ";
        }
        if(i==4){
            cout<<"      ";
        }
        if(i==5){
            cout<<"        ";
        }
            for(int j=5;j>=i;j--){
                cout<<j<<" ";
            }
        cout<<endl;
    }
    return 0;
}

