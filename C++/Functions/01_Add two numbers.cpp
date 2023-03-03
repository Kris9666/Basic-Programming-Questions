// Write a program to add 2 numbers using functions. 

#include<iostream>
using namespace std;
int add_num(int num1, int num2){
    return (num1+num2);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add_num(a,b)<<endl;
    return 0;
}