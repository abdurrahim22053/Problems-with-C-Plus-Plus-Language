#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,k;
    cin>>t;
    for(k=1;k<=t;k++){
        
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            cout<<"Case "<<k<<":";
            if(ar[i]%2==0){
                cout<<"Oddius";
                break;
            }
            else cout<<"Evenius";
            break;
        }
    }
}