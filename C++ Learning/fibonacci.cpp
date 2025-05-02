#include<iostream>
using namespace std;
int main (){
    int first=0,second=1,fibo,n;
cout<<"Enter a number:"<<endl;
cin>>n;
int i=0;
cout<<"Series :";
while(i<n){
    if(i<=1)
    fibo=i;
    else{
        fibo=first+second;
        first=second;
        second=fibo;
    }
    cout<<" "<< fibo ;
    i++;
}

}