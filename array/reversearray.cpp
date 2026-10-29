// swapping wala concept lagega iss mai aur two pointer wala bhiconcept hai iss mai jis mai do pointer set karke uss parr array chaleyenge

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
 
     int start=0;
     int end=n-1;

   while(start<=end)
    {
        
         int temp=arr[start];
          arr[start]=arr[end];
          arr[end]=temp;
          start++;
          end--;


    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
