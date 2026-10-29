#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int a;
    cin>>a;
    int b;
    cin>>b;
    int count=0;

    while(a>0 && b>0)
    {
        if(a>b)  a=a%b;
        else     b=b%a;
    }
    if(a==0){
        cout<<b;
    }
    else{
        cout<<a;
    }
   
}