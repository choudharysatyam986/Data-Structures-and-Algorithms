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
  cout<<endl;
//   original matrix

   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
   }


//    print 
for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        // swaping  i,j  &&& j,i
        int temp=arr1[i][j];
        arr1[i][j]=arr1[j][i];
        arr1[j][i]=temp;
    }
}
  cout<<"transpsoe matrix : "<<endl;
//   print 
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            cout<<arr1[i][j ]<<" ";
        }
        cout<<endl;
    }

    
}