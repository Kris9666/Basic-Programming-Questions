// Print the numbers in the sequence:
// 1. Print the number in increasing order up to n.
// 2. Print the number in decreasing order from n to 1.

#include<iostream>
using namespace std;
void inc(int n){
    if (n==1){
        cout<<"1"<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
void dec(int n){
    if (n==1){
        cout<<"1"<<" ";
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
int main(){
    inc(8);
    cout<<endl;
    dec(8);
    cout<<endl;
    return 0;
}