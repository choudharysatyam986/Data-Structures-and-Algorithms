#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the size of arr  :";
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    
}
int count=0;
  int major=n/2;
  for(int i=0;i<n;i++){
    int left=0;
    int right=left+1;
    if(v[left]==v[right]){
        count++;
    }
}
if(count>major){
    cout<<v[left];
}


}
