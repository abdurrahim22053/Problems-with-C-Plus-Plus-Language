#include<iostream>
using namespace std;
int main (){
    int rem,num,temp,sum=0;
    cout<<"Enetr a number :"<<endl;
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    cout<<"Number is :"<<sum<<endl;
    if(num==sum)
    cout<<"Armstrong number"<<endl;
    else cout<<"Not Armstrong"<<endl;
}