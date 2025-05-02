#include<iostream>
using namespace std;
int main (){
    int n,fact=1;
    cout<<"Enetr a number:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
    fact=fact*i;
    }
    cout<<"The factorial is = "<<fact;
    return 0;
}