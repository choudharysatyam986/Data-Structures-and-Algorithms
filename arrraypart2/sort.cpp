#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "Enter the size1: ";
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {

        if (v[left] == 0) {
            left++;
        }

        if (v[right] == 1) {
            right--;
        }
        if(left>right) break;
 
        if (v[left] == 1 && v[right] == 0) {
            int temp = v[left];
            v[left] = v[right];
            v[right] = temp;

            left++;
            right--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}