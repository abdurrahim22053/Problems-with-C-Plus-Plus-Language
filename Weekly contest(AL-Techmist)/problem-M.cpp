#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mili=k*l;
    int toastmili=(k*l)/nl;
    int toastslice=c*d;
    int toastsalt=p/np;
    int maxtoast=min(toastmili,min(toastslice,toastsalt));
    cout<<maxtoast/n;
}