#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>a;
    a.push_back(45);
    a.push_back(3);
    a.push_back(12);
    a.push_back(7);

    vector<int>b;
    b.push_back(10);
    b.push_back(20);
    b.push_back(30);
    b.push_back(40);
    cout<<"Before Swapping : ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
        cout<<endl<<"Before Swapping : ";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    swap(a,b);
      cout<<endl<<"After Swapping : ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
        cout<<endl<<"After Swapping : ";
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }

}