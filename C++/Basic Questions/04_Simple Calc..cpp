// Write a program to write a simple calculator.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter an operand: ";
    cin>>ch;

    switch (ch)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    default:
        cout<<"Operator not found"<<endl;
        break;
    }
    return 0;
}