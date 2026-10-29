#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number :";
    int n;
    cin>>n;
    int dupl=n;
    int rever=0;
    int lastdig;

    for(int i=0;n>0;i++)
    {
      lastdig=n%10;
      rever=rever*10+lastdig;
      n=n/10;
    }
    if(rever==dupl){
        cout<<dupl<<" is a pallidrom";
    }
    else{
        cout<<dupl<<" is not pallidrom";
    }
}