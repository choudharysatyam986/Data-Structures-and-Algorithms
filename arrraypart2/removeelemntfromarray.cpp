#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the size1 :";
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    vector<int>b;
    
    int i=0;
    while(i<v.size()){

        if(v[i]!=key){
        
            b.push_back(v[i]);
        }

        i++;
    }
  
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }

}