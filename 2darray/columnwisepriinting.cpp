#include<iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    int a[m][n];

    cout << "Enter the elements: ";

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // colomn wise printing 

     for(int j=0;j<n;j++)
     {
        // top to bottom
        // n % 2 != 0
        if(j%2==0){
           for(int i=0;i<m;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        // /bottom to top
        else
       {
         for(int i=m-1;i>=0;i--)
        {
            cout<<a[i][j]<<" ";
        }
         }
     }


}