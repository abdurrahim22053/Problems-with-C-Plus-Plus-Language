#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    vector<int>ar(n);
     for( int i=0;i<n;i++){
        cin>>ar[i];
     }
     for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
     }
     cout<<endl;
     fill(ar.begin(),ar.end(),1);
     for(int i=0;i<n;i++){
      cout<<ar[i]<<" ";
     }
   //   cout<<*max_element(ar.begin(),ar.end())<<endl;
   //     cout<<*min_element(ar.begin(),ar.end())<<endl;
   //   sort(ar.begin(),ar.end());
   //   cout<<endl<<"sorting : ";
   //   for(int i=0;i<n;i++){
   //      cout<<ar[i]<<" ";
   //   }
}