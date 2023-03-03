// Running sum of an Array

#include<iostream>
using namespace std;
int main(){
    int n,arr1[n],sum=0;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>arr1[i];
    }
    for (int i=0; i<n; i++){
        sum+=arr1[i];
        cout<<sum<<endl;
    }
    return 0;
}