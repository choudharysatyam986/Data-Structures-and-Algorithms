#include<iostream>
#include<vector>
using namespace std;
void reverse(int i,int j,vector<int>& a){
    while(i<=j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
    }
    return;
}
int main(){
    cout<<"enter the size :";
    int n;
    cin>>n;
    cout<<"enter the target :";
    int k;
    cin>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}