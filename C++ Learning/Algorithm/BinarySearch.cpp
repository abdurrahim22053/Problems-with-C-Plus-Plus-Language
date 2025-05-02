#include<iostream>
using namespace std;
int main(){
    int n,data;
    cout<<"Enter array size:";
     cin>>n;
     int arr[n];
     //Input data must be sorted order
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"Enter Searching Data :";
     cin>>data;
     int l=0;
     int r=n-1;
     int mid;
     while(l<=r){
        mid=(l+r)/2;
        if(data==arr[mid]){
        cout<<"Data is Found ! And it located at Index : "<<mid;
    break;
        }
    else if(data>arr[mid])
    l=mid+1;
   else //if(data<arr[mid])
   r=mid-1;
     }
     if(l>r)
     cout<<"Data is not Found!!!!";
    return 0;
}