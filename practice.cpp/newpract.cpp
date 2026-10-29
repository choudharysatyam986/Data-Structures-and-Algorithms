#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Enter the size of arr: ";
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        v.push_back(q);
    }

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(v[i] == v[j])
            {
                count++;
            }
        }
        cout<<v[i]<<" ="<<count<<endl;
    }

}