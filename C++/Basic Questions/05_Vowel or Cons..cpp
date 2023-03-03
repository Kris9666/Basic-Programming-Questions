// Write a program to find whether an alphabet is a vowel or a consonant.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an albhabet: ";
    cin>>ch;
    switch (ch)
    {
    case 'a' :
        cout<<"Vowel"<<endl;
        break;
    case 'e' :
        cout<<"Vowel"<<endl;
        break;
    case 'i' :
        cout<<"Vowel"<<endl;
        break;
    case 'o' :
        cout<<"Vowel"<<endl;
        break;
    case 'u' :
        cout<<"Vowel"<<endl;
        break;
    case 'A' :
        cout<<"Vowel"<<endl;
        break;
    case 'E' :
        cout<<"Vowel"<<endl;
        break;
    case 'I' :
        cout<<"Vowel"<<endl;
        break;
    case 'O' :
        cout<<"Vowel"<<endl;
        break;
    case 'U' :
        cout<<"Vowel"<<endl;
        break;
    default :
        cout<<"Consonant"<<endl;
        break;
    }
    return 0;
}