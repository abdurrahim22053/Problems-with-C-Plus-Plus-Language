//Distrinct number finding

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,count=0;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
    cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        int dis=1;
    for( int j=0;j<i;j++){
        if(ar[i]==ar[j]){
            dis=0;
        break;
        }

    }
    if(dis)  count++;
    }
    cout<<count;

}