#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i,int j,vector<int>& a){
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
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    
    reversepart(0,3,v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}