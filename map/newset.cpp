#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(27);

    int target=2;
    if(s.find(target)!=s.end()){
        cout<<"exist"<<endl;
    }
    else{
        cout<<"no";
    }
    cout<<s.size()<<endl;

    for(int ele:s){

        cout<<ele<<" ";

    }


}