#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    char message[500];
    cout<<"Enter your Message:"<<endl;
    gets(message);
    cout <<"Thank you for given your message "<<message<<endl;
    return 0;

}