// Count set bits

#include<iostream>
using namespace std;
int countbit(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<countbit(19)<<endl;
    return 0;
}