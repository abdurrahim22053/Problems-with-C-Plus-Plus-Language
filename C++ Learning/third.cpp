
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

   int sum=a+b;
  
   cout<<"summation="<<sum<<endl;
     float div= (float)a/b;
    cout<<fixed<<setprecision(1)<<div<<endl;

    return 0;
}