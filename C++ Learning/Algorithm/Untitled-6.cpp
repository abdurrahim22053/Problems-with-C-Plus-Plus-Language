#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    int m,n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           if(a[i][j]==1){
             m=i;
            n=j;
           }
        }
    }
    int d=(abs(m-2)+abs(n-2));
    cout<<d;
}