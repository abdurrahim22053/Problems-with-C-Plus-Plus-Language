#include<iostream>
using namespace std;
int main (){
   long long int k,n,w,sum=0;
   cin>>k>>n>>w;
   for(int i=1;i<=w;i++){
    sum=sum+i*k;
   }
   int borrow=sum-n;
   if(borrow<0){
    borrow=0;
   }
   
   cout<<borrow<<endl;
}