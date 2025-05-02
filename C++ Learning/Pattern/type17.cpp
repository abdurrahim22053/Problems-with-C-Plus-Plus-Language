#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for( int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<"";
            //cout<<i;
            // cout<<j%2;
            // cout<<i%2;
            //cout<<"#"<<" ";
            // cout<<(char)(j+64)<<" ";
            // cout<<(char)(i+64)<<" ";
        }

         for(int j=i-1;j>=1;j--){
            cout<<j<<"";
            //cout<<i;
            // cout<<j%2;
            // cout<<i%2;
            //cout<<"#"<<" ";
            // cout<<(char)(j+64)<<" ";
            // cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }

 for( int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<"";
            //cout<<i;
            // cout<<j%2;
            // cout<<i%2;
            //cout<<"#"<<" ";
            // cout<<(char)(j+64)<<" ";
            // cout<<(char)(i+64)<<" ";
        }

         for(int j=i-1;j>=1;j--){
            cout<<j<<"";
            //cout<<i;
            // cout<<j%2;
            // cout<<i%2;
            //cout<<"#"<<" ";
            // cout<<(char)(j+64)<<" ";
            // cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}