// Given a string of integers, our task is to form the biggest number out of those
// numbers in the string.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;

    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
}