// Write a program to print a given number using functions 

#include<iostream>
using namespace std;
void display(int n){
    cout<<"The number is "<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    display(n);
    return 0;
}