#include<iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n!=0){
        int rem=n%10;
        sum=sum+rem;
         n=n/10;
    }
    cout<<"The sum of the digits :"<<sum<<endl;
}