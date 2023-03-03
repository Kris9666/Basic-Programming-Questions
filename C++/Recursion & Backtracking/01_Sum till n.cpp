// Sum till n using Recursion 

#include<iostream>
using namespace std;
int sum(int n){
    if (n==0){
        return 0;
    }
    int prevSum = sum(n-1);
    return n+prevSum;
}
int main(){
    cout<<sum(9);
    return 0;
}