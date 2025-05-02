#include<iostream>
using namespace std;
int main(){
    int n,i,value,pos,flag=0;
    cout<<"Enter your array size:"<<endl;
    cin>>n;
    int ar[n];
    cout<<"Array input:"<<endl;
    for(i=0;i<n;i++){
cin>>ar[i];
    }
    cout<<"Output :"<<endl;
       for(i=0;i<n;i++){
cout<<ar[i]<<" ";
    }
    cout<<endl<<"Enter your searching value:"<<endl;
    cin>>value;
    for(i=0;i<n;i++){
        if(value==ar[i]){
            flag++;
             pos=i;
            break;
        }
    }
    if(flag==0)
    cout<<"Value is not found!"<<endl;
    else {
    cout<<ar[i]<<" is Found!!"<<endl;
    cout<<ar[i]<<" is located in Index :"<<pos;
    }

}