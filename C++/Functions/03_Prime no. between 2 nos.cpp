// Write a program to print all prime numbers between 2 given numbers 

#include<iostream>
#include<math.h>
using namespace std;
bool primenum(int num){
        for (int i=2; i<=sqrt(num); i++){
            if (num%i==0){
               return false;
            }
        }
        return true;
}
int main(){
    int a,b; 
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    for (int i=a; i<=b; i++){
        if(primenum(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}