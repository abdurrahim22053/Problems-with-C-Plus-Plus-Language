#include<iostream>
using namespace std;
int main (){
    int row,col,n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout<<"#";
        }
        cout<<endl;
    }
}