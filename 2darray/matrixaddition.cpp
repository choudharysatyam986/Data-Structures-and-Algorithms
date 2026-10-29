#include<iostream>
using namespace std;
int main(){
 int m;
 cout<<"enter the number of rows :";
 cin>>m;
 int n;
 cout<<"enter the number of col :";
 cin>>n;
  int arr1[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr1[i][j];
    }
  }

  int arr2[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>arr2[i][j];
    }
  }
   
  int sum;
  int ans[m][n];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      ans[i][j]=arr1[i][j]+arr2[i][j];
    }
  }

//   print 

for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
  
}