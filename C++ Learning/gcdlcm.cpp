#include<iostream>
using namespace std;
int main (){
    int n1,n2,gcd;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
    if(n1>n2){
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(int i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    cout<<"GCD :"<<gcd<<endl;
    int lcm=(n1*n2)/gcd;
    cout<<"LCM :"<<lcm;
}