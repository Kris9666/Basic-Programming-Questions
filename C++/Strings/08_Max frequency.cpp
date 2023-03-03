// Given a string s of latin characters, your task is to output the character which has
// maximum frequency.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a[26]; //a-z we have 26 characters
    for (int i=0; i<26; i++){
        a[i]=0;
    }
    for (int i=0; i<s.size(); i++){
        a[s[i]-'a']++;
    }
    char ans;
    int maxFreq = -1;
    for (int i=0; i<26; i++){
        if (maxFreq < a[i]){
            maxFreq = a[i];
            ans = 'a' + i;
        }
    }
    cout<<maxFreq<<endl;
    cout<<ans<<endl;
    return 0;
}