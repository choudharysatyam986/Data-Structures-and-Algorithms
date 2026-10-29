#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
    }

}