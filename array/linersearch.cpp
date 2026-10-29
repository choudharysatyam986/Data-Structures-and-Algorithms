#include<iostream>
using namespace std;
int main(){
    cout<<"enter size :";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the target :";
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
       if(key==arr[i])
       {
        cout<<"yes";
        return 1;
       }
       
    }
    return false;
    

}