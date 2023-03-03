// Write a program with two functions to print the maximum and the 
// minimum number respectively among three numbers entered by user

#include<iostream>
using namespace std;
void find(int num1, int num2, int num3){
    int min = num1, max = num2;
    if (num2<min){
        min=num2;
    }
    else if (num3<min){
        min=num3;
    }
    else if (num3>max){
        max=num3;
    }
    else if (num2>max){
        max=num2;
    }
    cout<<max<<" "<<min<<endl;
    return ;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    find(a,b,c);
    return 0;
}