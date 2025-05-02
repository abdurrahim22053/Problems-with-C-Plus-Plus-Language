#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    
int n,i;
cout<<"Enter a number:"<<endl;
cin>>n;
for(i=1;i<=10;i++){
    //cout<<setw(5);//setw() used for how much space you get in your output consule
    cout<<n<<"X"<<i<<"  = "<<i*n<<endl;
}
    return 0;
}
