// Given an array a[] of size n. Output sum of each subarray of the given array.

#include<iostream>
using namespace std;
void Sum(int n){
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        int counter = 0;
        for (int j=i; j<n; j++){
            counter+=arr[j];
            cout<<counter<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    Sum(n);
    return 0;
}