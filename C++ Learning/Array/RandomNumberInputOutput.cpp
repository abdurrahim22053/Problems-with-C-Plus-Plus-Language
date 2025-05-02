#include<iostream>
#include<stdlib.h>
using namespace std;

int main (){
    int i,n,even=0,odd=0;
    cout<<"Enter your arry size :"<<endl;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
     ar[i]= rand()%100+1;
    }

    cout<<"Output Random number generates : ";//<<endl<<endl;
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl<<"Even: ";
    for(i=0;i<n;i++){
        if(ar[i]%2==0){
            even++;
            cout<<ar[i]<<" "; 
        }
        }
        cout<<endl<<"Total even number is :"<<even;
        cout<<endl<<"Odd: ";
 for(i=0;i<n;i++){
        if(ar[i]%2!=0){
            odd++;
            cout<<ar[i]<<" ";         
        }
        }
        cout<<endl<<"Total odd number is:"<<odd;

}