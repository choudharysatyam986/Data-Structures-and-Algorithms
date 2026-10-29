//  iss question ka main funda ye m
// hai ki agr hum 0 0 ko swap kar rehe hai unko hum swap kare bass question ka squence nhi tut na chahhiye 

#include<iostream>
#include<vector>

using namespace std;
int main(){
     int n;
    cout<<"size of arr :";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

    }

    for(int i=0;i<n-1;i++)
    {
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(v[j]==0){
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