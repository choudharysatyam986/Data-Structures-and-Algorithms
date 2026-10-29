#include<iostream>
using namespace std;
void print(int n){
    if(n<1) return;
    cout<<n<<" ";
    print(n-1);
}
int main(){
    cout<<"enter the number :";
    int x; 
    cin>>x;
    print(x );
}