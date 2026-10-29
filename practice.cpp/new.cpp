// // second smallest  element in array

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     cout<<"size of vector";
//     int n;
    
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }

//    int small=-1;
//    int ssmal=-1;

//     for(int i=0;i<n;i++){
//       if(v[i]<small ){
//           ssmal=small;
//           small=v[i];
//       }
//     }

//     cout<<ssmal;
    
    
// }

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
    cout << "size of vector: ";
    int n;
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }

    int small = INT_MAX;
    int ssmal = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(v[i] < small) {
            ssmal = small;   // old smallest becomes second smallest
            small = v[i];
        }
        else if(v[i] < ssmal && v[i] != small) {
            ssmal = v[i];
        }
    }

    if(ssmal == INT_MAX)
        cout << "No second smallest element";
    else
        cout << "Second smallest = " << ssmal;

    return 0;
}