#include<iostream>
using namespace std;
int main (){
    int n;
    float sum=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    cout<<"1";
    for(int i=2;i<=n;i++){  
        cout<<" + 1/"<<i;
    }
    for(int j=1;j<=n;j++){
        sum=sum+1/(float)j;
    }
    cout<<endl<<"The summation of this series is :"<<endl<<sum;
    
}