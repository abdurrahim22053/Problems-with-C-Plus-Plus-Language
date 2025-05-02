#include<iostream>
using namespace std;

int partition(int arr[],int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
while(i<j){
    while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int temp=arr[l];
arr[l]=arr[j];
arr[j]=temp;
return j;
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int j=partition(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter your array size:";
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1);
    cout<<"Sorted array: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}