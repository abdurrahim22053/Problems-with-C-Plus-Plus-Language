#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,b,count=0;
    cin>>a>>b;
    int dif=b-a;
    if(dif==0){
        count=1;
        cout<<count;
       return 0;
    }
   
    if((a+b)%2==0){
         count=3;
         cout<<count;
     return 0;
    }
   
if((a+b)%2==1){
        count=2;
        cout<<count;
      return 0;
}

}