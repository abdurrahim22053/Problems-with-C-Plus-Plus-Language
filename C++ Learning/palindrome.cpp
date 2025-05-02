//palindrome number : when the original is same to the reverse number .
#include<iostream>
using namespace std;
int main (){
int temp,n,rem,sum=0;
cout<<"Enter a number:"<<endl;
cin>>n;
temp=n;
while(temp!=0){
    rem=temp%10;
    sum=sum*10+rem;
    temp=temp/10;

}
cout<<"reverse number :"<<sum<<endl;
if(n==sum)
cout<<"The number is Palindrome"<<endl;
else cout<<"Not Palindrome";

}