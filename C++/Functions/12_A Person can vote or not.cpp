// Write a program using functions to check if a person is eligible for 
// voting or not by comparing his age with legal voting age i.e. 18 

#include<iostream>
using namespace std;
void check(int a){
    if (a>=18){
        cout<<"Eligible for voting"<<endl;
    }
    else {
        cout<<"Not eligible for voting"<<endl;
    }
    return ;
}
int main(){
    int age;
    cin>>age;
    check(age);
    return 0;
}