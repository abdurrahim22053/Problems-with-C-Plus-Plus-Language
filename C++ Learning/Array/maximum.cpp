#include<iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout<<"Enter your array size: "<<endl;
    cin>>n;
    int ar[n];
    cout<<"Enter your array values:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<"output value of array:"<<endl;
     for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    int max=ar[0];
    for(int i=0;i<n;i++){
        if(max<ar[i])
        max=ar[i];
    }
    cout<<endl<<"Maximum value is :"<<max<<endl;

}   