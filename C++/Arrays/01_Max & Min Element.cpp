// Finding Max and Min element in an array. 

#include<iostream>
using namespace std;
int main(){
    int n,a[n];
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int maxno = INT_MIN;
    int minno = INT_MAX;
    for (int i=0; i<n; i++){
        maxno = max(maxno, a[i]);
        minno = min(minno, a[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
    return 0;
}