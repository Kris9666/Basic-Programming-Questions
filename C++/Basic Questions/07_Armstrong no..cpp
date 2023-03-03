// Checking if a number is armstrong number
// Armstrong numbers are numbers which have their sum of cube of individual digits equal to the 
// number itself.

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int num=n;
    while (n>0){
        int rem = n%10;
        int cube = rem*rem*rem;
        sum+=cube;
        n = n/10;
    }
    if (num==sum){
        cout<<"Armstrong number";
    }
    else {
        cout<<"Not an Armstrong Number";
    }
    return 0;
}
