#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the size1 :";
    int n1;
    cin>>n1;
    cout<<"enter the size2 :";
    int n2;
    cin>>n2;
    
    vector<int>a;
    for(int i=0;i<n1;i++){
        int q;
        cin>>q;
        a.push_back(q);
    }

     vector<int>b;
    for(int i=0;i<n2;i++){
        int q;
        cin>>q;
        b.push_back(q);
    }

     vector<int>v;
    int j=0;
    for(int i=0;i<n1;i++,j++){
        if(a[i]!=a[j]){
            v.push_back(a[i]);
        }
    }

    for(int i=0;i<n2;i++,j++){
        if(b[i]!=v[j]){
            v.push_back(a[i]);
        }
    }
    
    for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
        }
    }

    
    

