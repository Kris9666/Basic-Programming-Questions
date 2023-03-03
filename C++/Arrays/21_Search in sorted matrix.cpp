// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

// 1st Method :- Time complexity = O(n*m)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,x;
//     cin>>n>>m>>x;
//     int arr[n][m];
//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     bool flag = false;
//     for (int i=0; i<n; i++){
//         for (int j=0; j<m; j++){
//             if (arr[i][j]==x){
//                 cout<<i<<" "<<j<<endl;
//                 flag = true;
//             }
//         }
//     }
//     if (flag){
//         cout<<"Element is found";
//     }
//     else {
//         cout<<"Element is not found";
//     }
//     return 0;
// }

// 2nd Method := Time Complexity = O(n+m)
#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool found = false;
    int r=0, c=n-1;
    while (r<m && c>=0){
        if (arr[r][c] == x){
            found = true;
        }
        arr[r][c] > x ? c-- : r++;    // It means if (arr[r][c]>x) then c--, else r++. 
    }
    if (found){
        cout<<"Found";
    }
    else {
        cout<<"Not Found";
    }
    return 0;
}