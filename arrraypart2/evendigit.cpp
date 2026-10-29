#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the size1 :";
    int n;
    cin>>n;
    int key=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
  
    
    for(int i=0;i<n;i++){
        int num=v[i];
        int count=0;
        while(num>0){
            num=num/10;
            count++;
        }
    
        if(count%2==0){
            key++;
        }

    }
    cout<<key;

}