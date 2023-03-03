// Conversion decimal to binary 

#include<iostream>
using namespace std;
int dectobin(int n){
    int x=1, ans=0;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dectobin(n);
    return 0;
}