// To calculate n^p using Recursion 

#include<iostream>
using namespace std;
int power(int n, int p){
    if (p==0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n*prevPower;
}
int main(){
    cout<<power(2,4)<<endl;
    return 0;
}