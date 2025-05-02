#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
    int a,b,sum;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    // cout<<showpoint;
   
    sum=a+b;
    cout<<"Sumation of two numbers are:"<<sum<<endl;

    int sub=a-b;
    cout<<"Subtraction of two numbers are:"<<sub<<endl;

    int mul=a*b;
    cout<<"multiplication of two numbers are:"<<mul<<endl;

    float div=(float)a/b;
    cout<<"Division of two numbers are:"<<fixed<<setprecision(2)<<div<<endl;

    int rem=a%b;
    cout<<"Reminder of two numbers are:"<<rem<<endl;
    

    return 0;
}