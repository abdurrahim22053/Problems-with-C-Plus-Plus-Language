// #include<iostream>
// using namespace std;
// int main (){
//     int n,sum=0;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"The summation of the series is :"<<sum;
//     return 0;
// }
#include<iostream>
using namespace std;
int main (){
    int n1,n2,sum=0;
    int i=1,j=2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
    while(i<=n1 && j<=n2){
        sum=sum+i*j;
        i++;
        j++;
    }
    cout<<"The summation of the series is :"<<sum;
    return 0;
}