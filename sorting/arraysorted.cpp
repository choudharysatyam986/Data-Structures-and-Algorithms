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

    int i=0;
    while(i<n-1)
    {
        if(v[i]>v[i+1]){
            
            cout<<"no";
            break;
        }
        
        i++;
    }
    if(i==n-1)
    {
        cout<<"yes";
    }
}