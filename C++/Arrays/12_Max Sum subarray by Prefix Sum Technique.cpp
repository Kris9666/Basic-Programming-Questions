// Maximum Sum Subarray Array by Prefix Sum Technique.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int cumsum[n+1];
    cumsum[0] = 0;
    for (int i=1; i<=n; i++){
        cumsum[i] = cumsum[i-1] + a[i-1];
    }
    int maxSum = INT_MIN;
    for (int i=1; i<=n; i++){
        int sum=0; 
        maxSum = max(maxSum, cumsum[i]);
        for (int j=1; j<=i; j++){
            sum = cumsum[i] - cumsum[j-1];
            maxSum = max(maxSum, sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}