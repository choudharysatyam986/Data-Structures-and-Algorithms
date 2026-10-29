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
   for(int i=0;i<size;i++)
   {
    cout<<v[i]<<" ";
       
   }
   cout<<endl;
   int x;
   cout<<"enter the target :";
   cin>>x;

   // lower bond
   sort(v.begin(),v.end());

   for(int i=0;i<size;i++)
   {
      if(v[i]>x) 
      {
         cout<<v[i-1];
         break;
      }
 
   }
   // time complexity =0(n);
   // so we use binary search

     
    } 