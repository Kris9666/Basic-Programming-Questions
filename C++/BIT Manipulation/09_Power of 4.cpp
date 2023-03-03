// Given an integer n, return true if it is a power of four. Otherwise, return false.

#include<iostream>
using namespace std;
bool isPowerof4(int n){
    if (!(n&(n-1)) && n%3==1){
        return true;
    }
    return false;
}
int main(){
    cout<<isPowerof4(64);
    return 0;
}