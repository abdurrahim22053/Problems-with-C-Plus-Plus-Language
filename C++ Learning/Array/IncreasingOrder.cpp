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
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    cout<<endl<<endl<<"Increasing order:";
    for(int i=0;i<n;i++){
cout<<ar[i]<<" ";
    }
    cout<<endl<<"Maximum value of array :"<<ar[n-1]<<endl;
     cout<<" 2nd Maximum value of array :"<<ar[n-2]<<endl;
     cout<<"Minimum value of the array :"<<ar[0]<<endl;
}