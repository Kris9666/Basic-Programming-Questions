// Given a 32 bit number X, reverse its binary form and print the answer in decimal.
#include<iostream>
using namespace std;

int main() {
	long long int n,sum=0;
	cin>>n;
	for(int i=0;i<32;i++){
	    int x=n&1;
	    sum=sum<<1;
	    sum=sum|x;
	    n=n>>1;
	}
	cout<<sum<<endl;
	return 0;
}