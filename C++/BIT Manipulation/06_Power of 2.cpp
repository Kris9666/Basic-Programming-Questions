// Power of two 

#include<iostream>
using namespace std;
bool ispower(int n){
    return (n && !(n & (n-1)));
}
int main(){
    cout<<ispower(8)<<endl;
    return 0;
}