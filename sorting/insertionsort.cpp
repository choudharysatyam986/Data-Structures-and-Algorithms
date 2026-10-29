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

    // insertion sort

    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1 && v[i]<v[j-1])
        {
            if(v[i]>=v[j-1]) break;
            else{
                swap(v[i],v[j-1]);
            }
            j--;
        }

        
    }

    for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }







}
