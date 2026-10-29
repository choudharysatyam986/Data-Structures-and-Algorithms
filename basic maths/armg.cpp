#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int n;
    cin>>n;
    int duplicate=n;
    int last;
    int sum=0;
    for(int i=0;n>0;i++)
    {
       last=n%10;
       sum=sum+(last*last*last);
       n/=10;
    }
    if(duplicate==sum)
    {
        cout<<"is armg number ";
    }
    else{
        cout<<"is not armg number ";
    }
}