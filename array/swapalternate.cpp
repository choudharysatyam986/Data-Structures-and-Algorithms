#include<iostream>
using namespace std;
int  swap(int x , int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<y;
}

int main(){
    cout<<"enter size :";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


   for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        swap(arr[i],arr[i+1]);

    }
     
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
}