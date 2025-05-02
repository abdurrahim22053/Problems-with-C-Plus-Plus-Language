#include<iostream>
using namespace std;
int main(){
    int i,j,temp,n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //Selection sort
    for(i=0;i<n-1;i++){
        int min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        }
    }
    cout<<"Sorted array in ascending order :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}