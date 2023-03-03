// Check if a given character array is a palindrome or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = true;     //We can also write check = 1 cause 1 means true.
    for (int i=0; i<n; i++){
        if (arr[i] != arr[n-1-i]){
            check = false;       //We can also write check = 0 cause 0 means false.
            break;
        }
    }
    if (check == true){
        cout<<"Word is a palindrome"<<endl;
    }
    else {
        cout<<"Word is not a palindrome"<<endl;
    }
    return 0;
}