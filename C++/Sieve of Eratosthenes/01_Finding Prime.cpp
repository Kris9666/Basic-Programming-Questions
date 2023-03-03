// Finding primes in Range [1:n] without using Sieve of Eratosthenes
// Input : 30 
// Output : 2 3 5 7 11 13 17 19 23 29 

#include<iostream>
using namespace std;
void primeSieve(int n){
    int prime[n+1] = {0};
    for (int i=2; i<=n; i++){
        if (prime[i]==0){
            for (int j=i*i; j<=n; j+=i){
                prime[j]=1;
            }
        }
    }
    for (int i=2; i<=n; i++){
        if (prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}