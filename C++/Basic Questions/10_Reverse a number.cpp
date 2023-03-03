// Reversing a number 

// 1st Method 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n>0){
        int rem = n%10;
        cout<<rem;
        n = n/10;
    }
    return 0;
}

// 2nd Method 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 0;
    while (n>0){
        int rem = n%10;
        num = num*10 + rem;
        n = n/10;
    }
    cout<<num<<endl;
    return 0;
}