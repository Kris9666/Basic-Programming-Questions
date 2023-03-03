// Searching in a matrix

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cin>>x;

    bool flag = false;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if (flag){
        cout<<"Element is found"<<endl;
    }
    else {
        cout<<"Element is not found"<<endl;
    }
    return 0;
}