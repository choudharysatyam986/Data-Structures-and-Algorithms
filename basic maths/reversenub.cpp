#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int n;
    cin>>n;
    int reverse=0;
    int lastdig;
    for(int i=0;n>0;i++)
    {
        lastdig=n%10;
        reverse=reverse*10+lastdig;
        n=n/10;
    }
    cout<<reverse;
}