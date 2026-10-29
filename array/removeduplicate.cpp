#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the size of array: ";
    int n;
    cin>>n;

    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }

    int count=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        if(v[i]==v[j]) count++;
    }

   }
   
  cout<<count;
    
    
}