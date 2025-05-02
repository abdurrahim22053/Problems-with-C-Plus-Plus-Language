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
    for(int i=0;i<n;i++){
        sum=sum+ar[i];
    }
    cout<<endl<<"Summation of this array:"<<sum<<endl;
    float avg=(float)sum/n;
    cout<<"The Average value of this array :"<<avg<<endl;

}