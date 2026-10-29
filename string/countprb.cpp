#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
int main(){

    string str;
    cout<<"enter the string : ";
    cin>>str;

    int count=0;
    int j=0;
    int i=1;
    while(str[i]!='\0')
    {
        if(str[i]==str[j]) count++;
        i++;
        j++;
    }
    cout<<count++;
}
