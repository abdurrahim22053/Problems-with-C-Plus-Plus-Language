#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int x1,x2,x3,x4,max;
    cin>>x1>>x2>>x3>>x4;
   max=x1;
   if(x2>max)
   max=x2;
   if(x3>max)
   max=x3;
   if(x4>max)
   max=x4;
   //cout<<max;
   if(max-x1!=0)
   cout<<max-x1<<" ";
      if(max-x2!=0)
   cout<<max-x2<<" ";
      if(max-x3!=0)
   cout<<max-x3<<" ";
      if(max-x4!=0)
   cout<<max-x4<<" ";
 
}