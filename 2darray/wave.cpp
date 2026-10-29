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

    // Wave print
    for(int i = 0; i < m; i++)
    {
        if(i % 2 == 0)
        {
            // Left -> Right
            for(int j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            // Right -> Left
            for(int j = n - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}


