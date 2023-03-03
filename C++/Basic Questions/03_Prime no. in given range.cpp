//  Write a program to print all prime numbers in a given range

#include<iostream>
using namespace std;
int main(){
    int a,b,i,j;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for (i=a; i<=b; i++){
        for (j=2; j<i; j++){
            if (i%j==0){
                break;
            }
        }
        if (j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}