// Taking input and Printing output of a character array 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}