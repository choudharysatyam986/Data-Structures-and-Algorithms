#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

    int n;
    cout<<"enter the array size:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }

    //   selection sort
     
    for(int i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int midx=-1;
        for(int j=i;j<n;j++)
        {
            if(v[j]<min)
            {
                min=v[j];
                midx=j;

            }
        }
        swap(v[i],v[midx]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

     


         
}