// Given an integer num, return an array of the number of 1's in the binary 
// representation of every number in the range [0, num].

#include<iostream>
using namespace std;
void countbit(int num){
    for (int i=0; i<=num; i++){
        int x=i;
        int count=0;
        while(x){
            x = x & (x-1);
            count++;
        }
        cout<<count<<" ";
    }
}
int main(){
    int num;
    cin>>num;
    countbit(num);
    return 0;
}