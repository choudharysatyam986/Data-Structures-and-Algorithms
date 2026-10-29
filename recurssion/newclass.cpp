
//  basic of recursion
#include<iostream>
using namespace std;
// void gun(int n){
//     if(n==0) return;
//     cout<<"kyaa reee"<<endl ;
//     gun(n-1);
// }

void fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
    
}
int main(){
  cout<<fact(5);

   
}