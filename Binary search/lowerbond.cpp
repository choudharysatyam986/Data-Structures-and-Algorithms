#include<iostream>
 #include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   cout<<"enter array :";
   int size;
   cin>>size;
   vector<int>v;
   for(int i=0;i<size;i++){
    int n;
    cin>>n;
    v.push_back(n);
   }
  sort(v.begin(),v.end());
   int x;
   cout<<"enter the element : ";
   cin>>x;

   int lo=0;
   int hi=size-1;
   bool flag=false;
   while(lo<=hi)
   {
    int mid=lo+(hi-lo)/2;
    if(v[mid]==x)
    {
        flag=true;
        cout<<v[mid-1];
        break;

    }
    else if(v[mid]<x) lo=mid+1;
    else  hi=mid-1;
   }
   if(flag==false)  cout<<v[hi];





}
