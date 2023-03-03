// The Hamming distance between two integers is the number of positions at which the 
// corresponding bits are different.
// Given two integers x and y, return the Hamming distance between them.

#include<iostream>
using namespace std;
int distance(int x, int y){
    int a = (x xor y);
    int res = 0;
    while(a>0){
        a = (a&(a-1));
        res++;
    }
    return res; 
}
int main(){
    cout<<distance(1,4);
    return 0;
}