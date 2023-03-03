// Kids with the greatest number of candies.
// Given the arrays candies and the integer extracandies, where candies[i] represents the 
// number of candies that the ith kid has. For each kid check if there is a way to 
// distriute extracandies among the kids such that he or she can have the greatest 
// number of candies among them. Notice that the multiple kids can have the greatest 
// number of candies.
// Input: candies = [2,3,5,1,3], extraCandies = 3
// Output: [true,true,true,false,true] 
// Input: candies = [12,1,12], extraCandies = 10
// Output: [true,false,true]

#include<iostream>
using namespace std;
int main(){
    int n, candies[n], extracandies;
    cout<<"Enter the number of kids: "<<endl;
    cin>>n;
    cout<<"Enter the candies: "<<endl;
    for (int i=0; i<n; i++){
        cin>>candies[i];
    }
    cout<<"Enter the number of extracandies: "<<endl;
    cin>>extracandies;
    int maxno = INT_MIN;
    for (int i=0; i<n; i++){
        maxno = max(maxno, candies[i]);
        if (maxno > extracandies+candies[i]){
            cout<<"False"<<" ";
        }
        else {
            cout<<"True"<<" ";
        }
    }
    return 0;
}