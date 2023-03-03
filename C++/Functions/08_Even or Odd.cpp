// Write a program to find out whether a given number is even or odd
// using functions.

#include<iostream>
using namespace std;
void find(int n){
    if (n%2==0){
        cout<<"Even number"<<endl;
    }
    else {
        cout<<"Odd number"<<endl;
    }
    return ;
}
int main(){
    int a;
    cin>>a;
    find(a);
    return 0;
}