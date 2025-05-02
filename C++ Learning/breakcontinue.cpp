//break and continue statement
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=50;i++){
        if(i%3==0)
        continue;
        cout<<"  "<<i;
        if(i==10)
        break;

    }
    //cout<<endl<<"Abdur Rahim";
    return 0;
}