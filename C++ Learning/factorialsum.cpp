#include<iostream>
using namespace std;
int main (){
    int n,fact=1,sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+fact;

    }
    cout<<"The summation of the series is="<<endl<<sum<<endl;
    return 0;
}