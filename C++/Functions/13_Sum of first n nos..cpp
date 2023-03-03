// Sum of first n natural numbers 

#include<iostream>
using namespace std;
int sumnum(int a){
    int sum=0;
    for (int i=1; i<=a; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sumnum(n)<<endl;
    return 0;
}