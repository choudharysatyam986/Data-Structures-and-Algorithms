#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter size :";
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    
    }

     int max=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }

    }
    cout<<max<<":greatest";
        
     

}