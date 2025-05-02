//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main (){
int count=0;
    string s[110];
    gets(s);
    int l=s.strlen();
    cout<<l<<endl;
    // int i=0;
    // while(s[i]!='\0'){
    //     if(s[i]!=s[i+1]){
    //         count++;
    //         i++;
    //     }
    // }
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(s[i]!=s[j])
            count++;
        j++;
        }
        i++;
    }
    cout<<count;
    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }
    else cout<<"CHAT WITH HER!";
}