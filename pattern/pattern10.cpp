#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number";
    int n;
    cin>>n;
    int key=1;
    for(int i=0;i<n;i++)
    {
      if(i%2==0) key=1;
      else key=0;  
     for(int j=0;j<=i;j++){
        cout<<key<<" ";
        key=1-key;
     }
     cout<<endl;

    }
}