#include<bits/stdc++.h>
using namespace std;
int main (){
    int y,w,max_num;
    cin>>y>>w;
    if(y>w) max_num=y;
    else max_num=w;
    int d=(7-max_num);
    int total=6;
    int gcd=__gcd(d,total);
    cout<<d/gcd<<"/"<<total/gcd;
}