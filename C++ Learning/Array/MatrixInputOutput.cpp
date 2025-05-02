#include<iostream>
using namespace std;
int main (){
    int i,j,m,n;
    cout<<"Enter your row and coloumn :"<<endl;
    cin>>m>>n;
    int A[m][n];
    cout<<"Enter Matrix element :"<<endl;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cin>>A[i][j];
    }
    cout<<endl;
}
cout<<"Output Matrix A:"<<endl;

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}

}