#include<iostream>
using namespace std;
int main (){
    char letter;
    cout<<"enter a letter:"<<endl;
    cin>>letter;
    switch(letter){
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        cout<<"Vowel"<<endl;
        break;
        default:
        cout<<"Constant"<<endl;
    }
     return 0;
}