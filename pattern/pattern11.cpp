#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    //  numbers
     for(int j=1;j<=i;j++)
     {
        cout<<j;
     }


    //  space
    for(int j=1;j<=(2*n-2*i);j++)
    {
        cout<<" ";
    }


    // numbers
    for(int j=i;j>=1;j--)
     {
        cout<<j;
     }
     cout<<endl;

    }
}