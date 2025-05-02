#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for( int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
            //cout<<i;
            // cout<<j%2;
            // cout<<i%2;
            //cout<<"#"<<" ";
            // cout<<(char)(j+64)<<" ";
            // cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}