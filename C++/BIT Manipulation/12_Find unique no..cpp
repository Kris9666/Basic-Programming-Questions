// Write a program to find a unique number in an array where all numbers
// except one, are present thrice.

#include<iostream>
using namespace std;
bool getBit(int n, int i){
    return ((n & (1<<i)) != 0);
}
int setBit(int n, int i){
    return (n | (1<<i));
}
int unique(int arr[], int n){
    int result = 0;
    for (int i=0; i<64; i++){
        int sum=0;
        for (int j=0; j<n; j++){
            if (getBit(arr[j], i)){
                sum++;
            }
        }
        if (sum%3!=0){
            result = setBit(result,i);
        }
    }
    return result;
}
int main(){
    int arr[] = {1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10);
    return 0;
}