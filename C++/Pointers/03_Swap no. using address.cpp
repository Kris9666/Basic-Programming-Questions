// Swapping 2 variables using the address 

#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a = 2, b = 4;
    int *aptr = &a;
    int *bptr = &b;
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;
    return 0;
}

// Or 
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a = 2, b = 4;

    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}