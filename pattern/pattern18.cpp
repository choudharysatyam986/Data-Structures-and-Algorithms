#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number : ";
    int n;
    cin>>n;
    int key=0;
    for(int i=0; i<n;i++)
    {
        //   stars
         for(int j=1;j<=n-i;j++)
         {
            cout<<"*";
         }


        // space
           for(int j=0;j<key;j++)
           {
             cout<<" ";
           }

        // stars
        for(int j=1;j<=n-i;j++)
        {
           cout<<"*";
        }
         key+=2;
        cout<<endl;

    }
      int space=8;

      for(int i=1;i<=n;i++){

         //   stars
         for(int j=1;j<=i;j++)
         {
            cout<<"*";
         }


        // space
         for(int j=0;j<key;j++)
           {
             cout<<" ";
           }

        // stars
         for(int j=1;j<=i;j++)
         {
           cout<<"*";
         }
         key-=2;
        cout<<endl;

      }

}