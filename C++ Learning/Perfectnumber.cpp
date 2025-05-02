#include<iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            cout<<i<<" ";
            sum=sum+i;
        }
    }
    cout<<endl<<"Number is :"<<sum<<endl;
    if(sum==n)
    cout<<"Perfect Number"<<endl;
    else cout<<"Not Perfect number"<<endl;

    
}