#include<iostream>
using namespace std;
int main(){
    
    int m;
 cout<<"enter the number of rows :";
 cin>>m;
 int n;
 cout<<"enter the number of col :";
 cin>>n;
//  matrix1
cout<<endl;
  
cout<<"matrix 2 :";
int p;
cout<<"enter the number of rows :";
cin>>p;
int q;
cout<<"enter the number of col :";
cin>>q;
//   matrix2

cout<<endl;
if(n==p){

    
    cout<<"enter the element matrix 1:";

    int a[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
    }
    cout<<endl;

    cout<<"enter the element matrix2 :";
    int b[p][q];
      for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
      }
      cout<<endl;

    //  result matirx
    
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++)
        {
            // multiplying 
             res[i][j]=0;
             for(int k=0;k<p;k++){
                res[i][j]+=a[i][k]*b[k][j];
                
             }

  
        }
    }

    // print 
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

  }
  else{
    cout<<"cannot be multiplied :";
  }

  


}