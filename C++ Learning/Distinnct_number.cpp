#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int n;
        unordered_set<int>uniq;
        cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            uniq.insert(ar[i]);
        }
        cout<<n-uniq.size()<<endl;
    }
}