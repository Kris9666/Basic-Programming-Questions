// Write a program to find the factorial of a given number.

#include<iostream>
using namespace std;
int fact(int n){
    int sum=1;
    for (int i=1; i<=n; i++){
        sum*=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}