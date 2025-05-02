
//Missing number calculate
#include<bits/stdc++.h>
using namespace std;
int main (){
    long long int n,tempsum=0,sum=0,num;
    cin>>n;
    sum=n*(n+1)/2;
    num=n-1;
    int ar[num];
    for(int i=0 ;i<n-1;i++){
        cin>>ar[i];
    tempsum=tempsum+ar[i];
    }
    cout<<"Missing number : "<<sum-tempsum<<endl;
}
