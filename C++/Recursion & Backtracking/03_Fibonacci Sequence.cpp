// To get the ith element of Fibonacci series of n

#include<iostream>
using namespace std;
int fib(int n){
    if (n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    cout<<fib(6);
    return 0;
}