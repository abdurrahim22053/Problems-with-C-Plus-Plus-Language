#include<iostream>
using namespace std;
int main (){
    int t;
    cout<<"Test case:"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter arry size:"<<endl;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        cout<<"Output arry:"<<endl;
        for(int i=0;i<n;i++){
            cout<<" "<<ar[i];
        }
    }
}