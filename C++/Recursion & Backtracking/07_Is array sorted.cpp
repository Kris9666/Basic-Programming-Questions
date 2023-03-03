// Check if Array is Sorted

#include<iostream>
using namespace std;
bool sorted(int arr[], int n){
    if (n==1){
        return true;
    }
    bool restArray = sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restArray);
}
int main(){
    int arr[] = {2,4,7,8,9,13,15};
    cout<<sorted(arr,7);
    return 0;
}