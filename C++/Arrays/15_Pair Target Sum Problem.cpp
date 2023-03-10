// Pair Target Sum Problem

// 1st Method i.e. Time complexity = O(n^2)
// #include<iostream>
// using namespace std;

// bool pairsum(int arr[], int n, int k){
//     for (int i=0; i<n-1; i++){
//         for (int j=i+1; j<n; j++){
//             if (arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[]={2,4,7,11,14,16,20,21};
//     int k=31;
//     pairsum(arr,8,k);
//     return 0;
// }

// 2nd method i.e. Time Complexity = O(n)
#include<iostream>
using namespace std;
bool pairsum(int arr[], int n, int k){
    int low=0, high=n-1;

    while(low<high){
        if (arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low]+arr[high]>k){
            high--;
        }
        else {
            low++;
        }
    }
    return false;
}
int main(){
    int arr[]={2,4,7,11,14,16,20,21};   //Sorted Array
    int k=31;
    pairsum(arr,8,k);
    return 0;
}