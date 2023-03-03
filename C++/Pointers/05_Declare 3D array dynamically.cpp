// Declare a 3D array Dynamically. 

#include<iostream>
using namespace std;
int main(){
    int x=2, y=3, z=4;
    int count = 0;

    int *a = new int[x*y*z];
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            for (int k=0; k<z; k++){
                *(a+i*y*z+j*z+k) = ++count;
            }
        }
    }
    for (int i=0; i<x; i++){
        for (int j=0; j<y; j++){
            for (int k=0; k<z; k++){
                cout<<*(a+i*y*z+j*z+k)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    delete[] a;
    return 0;
}