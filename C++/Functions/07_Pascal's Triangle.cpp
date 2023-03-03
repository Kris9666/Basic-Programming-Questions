//  Write a program to print the Pascal triangle.

#include<iostream>
using namespace std;
int fact(int n){
    int sum=1; 
    for (int i=1; i<=n; i++){
        sum*=i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}