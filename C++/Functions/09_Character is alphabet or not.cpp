// Write a program to find out whether a given character is an alphabet or 
// not using functions

#include<iostream>
using namespace std;
void check(char c){
    if ((c>='A' && c<='Z') || (c>='a') && (c<='z')){
        cout<<"Albhabet"<<endl;
    }
    else {
        cout<<"Not an albhabet"<<endl;
    }
    return;
}
int main(){
    char c;
    cin>>c;
    check(c);
    return 0;
}