#include<iostream>
#include<vector>
using namespace std;
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
//     vector<int>a;
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(v[i]==0){
//            count++; 
//         }
//         else{
//              a.push_back(v[i]);
//         }
//     }
// //    int zero=0;
//     for(int i=0;i<count;i++){
//         a.push_back(0);
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;


//    using two poinnter approach

     int i=0;
     int j=n-1;
     while(i<=j){
        if(v[i]==0 && v[j]!=0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if(v[i]==0 && v[j]==0){
            i++;
        }
        if(v[i]!=0 && v[j]==0){
            j--;
        }
        if(v[i]!=0 && v[j]!=0){
            i++;
            }

        }

         for(int i=0;i<n;i++)
        {
        
            cout<<v[i]<<" ";
         }
    

}
