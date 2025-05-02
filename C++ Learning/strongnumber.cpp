#include<iostream>
using namespace std;
int main (){
    int num,temp,rem,sum=0;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    cout<<"Number is :"<<sum<<endl;
    if(num==sum)
    cout<<"Strong number"<<endl;
    else cout<<"Not Strong number"<<endl;
    
}