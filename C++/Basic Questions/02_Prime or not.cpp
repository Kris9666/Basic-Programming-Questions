// Write a program to check if a given number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for (i=2; i<n; i++){
        if (n%i==0){
            cout<<"Not a prime number";
            break;
        }
    }
    if (i==n){
        cout<<"Prime Number";
    }
    return 0;
}