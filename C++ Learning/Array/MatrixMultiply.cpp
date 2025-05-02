#include<iostream>
using namespace std;
int main (){
    int i,j,m,n;
    cout<<"Enter your row and coloumn :"<<endl;
    cin>>m>>n;
    int A[m][n],B[m][n],C[m][n];
   
    cout<<"Enter element of Matrix A :"<<endl;

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cin>>A[i][j];
    }
    cout<<endl;
}

cout<<"Enter element of Matrix B :"<<endl;
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cin>>B[i][j];
    }
    cout<<endl;
}

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        C[i][j]=0;
        for(int k=0;k<n;k++){
        C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }  
}

cout<<"Output Matrix A:"<<endl;

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Output Matrix B:"<<endl;

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<B[i][j]<<" ";
    }
    cout<<endl;
}
cout<<"Output Matrix AXB=C : "<<endl;

for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}

}