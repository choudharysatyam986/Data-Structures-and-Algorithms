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
 
    int large=v[0];
    int slarge=-1;

for(int i=0;i<n;i++)
{
       
    if(v[i]>large)
    {
       large=v[i];
     }

}


for(int i=0;i<n;i++)
{
       
    if( v[i]>slarge && v[i]<large)
    {
       slarge=v[i];


    }

}
cout<<" largest :"<<large;
cout<<endl;
cout<<" scond largest :"<<slarge;


}