#include<bits/stdc++.h>
using namespace std;
int main (){
    int i,j,x,y,n,comx=-1,comy=-1;
    int compositeX=0;
    int compositeY=0;
    cin>>n;
    for(x=4;x<n;x++){
        y=n-x;
        if(x>3){
        compositeX=0;
        for(i=2;i*i<=x;i++){
            if(x%i==0){
         compositeX=1;
            break;
            }
        }
        }
       if(y>3){
        compositeY=0;
         for(j=2;j*j<=y;j++){
            if(y%j==0){
                compositeY=1;
            break;
            }
        }
    }
   if(compositeX && compositeY){
   comx=x;
   comy=y;
   break;
   }
    }
      cout<<comx<<" "<<comy;
}