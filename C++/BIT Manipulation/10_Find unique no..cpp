// Write a program to find a unique number in an array where all numbers except
// one, are present twice.

#include<iostream>
using namespace std;
int unique(int arr[], int n){
    int xorsum=0;
    for (int i=0; i<n; i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main(){
    int arr[] = {1,2,3,4,5,1,2,3,4};
    cout<<unique(arr,9);
    return 0;
}