 //lectec 21
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // sorting
    int n;
    cout<<"size of arr :";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

    }

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1-i;j++)
    //     {
    //         if(v[j]>v[j+1]){
    //             swap(v[j],v[j+1]);
    //         }
    //     }
    // }

    // cout<<" reverse arr :";  
    // for(int i=0;i<n;i++ )
    // {
    //      cout<<v[i]<<" ";
    // }

      

    // optimisied version

     for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true)
        {
            // swap dint happpen means  
            break;
        }
    }

    cout<<" reverse arr :";  
    for(int i=0;i<n;i++ )
    {
         cout<<v[i]<<" ";
    }



}