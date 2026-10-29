#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "enter array : ";

    int size;
    cin >> size;

    vector<int> arr;

    for(int i = 0; i < size; i++) {
        int n;
        cin >> n;
        arr.push_back(n);
    }

    sort(arr.begin(), arr.end());

    int x;
    cout << "enter the element : ";
    cin >> x;

    int first = -1;
    int last = -1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == x)
        {
            if(first == -1) first =i;

            else last = i;
        }
    }

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
}