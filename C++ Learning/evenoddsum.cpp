#include<iostream>
using namespace std;
int main (){
    int n, even=0,odd=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
for(int i=1;i<=n;i=i+2){
    odd=odd+i;
}
for(int j=2;j<=n;j=j+2){
    even=even+j;
}

int result=odd-even;
cout<<result;

}