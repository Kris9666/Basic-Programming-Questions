// Given an array nums of distinct integers, print all the possible permutations.
// Input : 3 
//         1 2 3 
// Output : 1 2 3 
//          1 3 2
//          2 1 3
//          2 3 1
//          3 1 2
//          3 2 1

// 1st Method 
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> ans;
// void permute(vector<int> &a, int idx){
//     if (idx == a.size()){
//         ans.push_back(a);
//         return;
//     }
//     for (int i = idx; i<a.size(); i++){
//         swap(a[i], a[idx]);
//         permute(a,idx+1);
//         swap(a[i], a[idx]);
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for (auto &i : a){
//         cin>>i;
//     }
//     permute(a,0);
//     for (auto v: ans){
//         for (auto i: v){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// STL trick Method
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> ans;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (auto &i : a){
        cin>>i;
    }
    sort(a.begin(), a.end());
    do {
        ans.push_back(a);
    }
    while(next_permutation(a.begin(), a.end()));
    for (auto v: ans){
        for (auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}