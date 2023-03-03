// UpperCase-LowerCase interconversion 

// 1st Method with sorting 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}

// 2nd Method 
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
    
//     for (int i=0; i<s.size(); i++){
//         if (s[i]>='a' || s[i]<='z'){
//             s[i] -= 32;
//         }
//     }
//     cout<<s<<endl;
//     for (int i=0; i<s.size(); i++){
//         if (s[i]>='A' || s[i]<='Z'){
//             s[i] += 32;
//         }
//     }
//     cout<<s<<endl;
//     return 0;
// }