#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    string p;
    cin>>p;
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());

    if(p==s) cout<<"yes";
    else cout<<"no";
  


}