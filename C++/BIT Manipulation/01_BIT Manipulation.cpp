//BIT Manipulation

// Get bit 
#include<iostream>
using namespace std;
int getbit(int n, int i){
    return ((n & (1<<i))!= 0);
}
int main(){
    int n = 5;
    int i = 2;
    cout<<getbit(n,i)<<endl;
    return 0;
}

// Set bit
#include<iostream>
using namespace std;
int setbit(int n, int i){
    return (n | (1<<i));
}
int main(){
    int n = 5;
    int i = 1;
    cout<<setbit(n,i)<<endl;
    return 0;
}

// Clear Bit 
#include<iostream>
using namespace std;
int clearbit(int n, int i){
    int mask = ~(1<<i);
    return (n & mask);
}
int main(){
    int n = 5;
    int i = 2;
    cout<<clearbit(n,i)<<endl;
    return 0;
}

// Update Bit 
#include<iostream>
using namespace std;
int updatebit(int n, int i, int value){
    int mask = ~(1<<i);
    n = n & mask;
    return (n | (value<<i));
}
int main(){
    int n = 5;
    int i = 1;
    int value = 1;
    cout<<updatebit(n,i,value)<<endl;
    return 0;
}

// Toggle bit 
#include<iostream>
using namespace std;
int togglebit(int n, int i){
    return (n xor (1<<i));
}
int main(){
    int n = 5;
    int i = 1;
    cout<<togglebit(n,i)<<endl;
    return 0;
}