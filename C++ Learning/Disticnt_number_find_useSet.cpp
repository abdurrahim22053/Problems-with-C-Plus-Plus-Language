
//Counting the number of distinct elements
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    set<int>dis;
    for(int i=0;i<n;i++){
        dis.insert(ar[i]);
    }
    cout<<dis.size()<<endl;
}