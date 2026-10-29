#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<" enter the size:";
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    string str;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }

    cout<<str;
}