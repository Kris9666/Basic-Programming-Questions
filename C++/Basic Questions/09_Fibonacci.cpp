// Printing first n terms of Fibonacci series with starting terms as 0,1 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n==1){
        cout<<"0"<<endl;
    }
    else if (n==2){
        cout<<"0 1"<<endl;
    }
    else {
        int curr, a=0, b=1, i=3;
        cout<<a<<" "<<b<<" ";
        while (i<=n){
            curr = a+b;
            cout<<curr<<" ";
            a=b;
            b = curr;
            i++;
        }
            cout<<endl;
    }
    return 0;
}