// find the intersection in array between two array
// dono mai common nikalana hai

#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size:";
    int n;
    cin>>n;
    cout<<"enter the size:";
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
     
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++){
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            
        }
      }
    }
}
    
    

