#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int n;
    cin>>n;
    int count=0 ;
    int rever;
    for(int i=0;n>0;i++)
    {
        n=n/10;
        count++;
        

    }
    cout<<count;
    
}