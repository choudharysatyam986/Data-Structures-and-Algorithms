// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the number : ";
//     int n;
//     cin>>n;
//      for(int i=1;i<=n;i++){
//         for(int j=0;j<=n-i+1;j++)
//         {
//             cout<<"*";
//             // 
//         }
//         cout<<endl;
//      }
// }

// pattern 6
// 12345
// 1234
// 123
// 12
// 1
  
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter the number : ";
//     int n;
//     cin>>n;
//      for(int i=0;i<n;i++){
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<j;
//             // 
//         }
//         cout<<endl;
//      }
// }
// pattern 7
//                 *
//                ***
//               *****
//             ********

#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number : ";
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        // space
           for(int j=0;j<n-i+1;j++)
           {
              cout<<" ";
           }
    //    stars
            for(int j=0;j<2*i+1;j++)
            {
                cout<<"*";
            }
    // space
         for(int j=0;j<n-i+1;j++)
        {
            
           cout<<" ";
        }
   
        cout<<endl;
     }
}