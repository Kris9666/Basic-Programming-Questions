// Write a program to print Fibonacci sequence. 

#include<iostream>
using namespace std;
void fib(int n){
    int a=0, b=1, next;
    for (int i=1; i<=n; i++){
        cout<<a<<" ";
        next = a+b;
        a=b;
        b=next;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}