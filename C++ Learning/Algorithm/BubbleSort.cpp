#include<iostream>
using namespace std;
int main (){
    int n,i,j,temp;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    //Bubble sort
    for(i=0;i<n-1;i++){
        int flag=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag=0)
        break;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}