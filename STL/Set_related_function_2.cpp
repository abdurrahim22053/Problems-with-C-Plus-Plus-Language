#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int>s={1,2,4,6,7};
    set<int>s1={8,9,10};
    set<int>s2;
    s2=s1; //assigning a set in another set
    //s1.swap(s);         //swapping between two sets
   // s.emplace(8);  //emplace function just like as a insert function
    //s.emplace(10);
    set<int>::iterator it;
    for(auto it:s2) 
    cout<<it<<" ";
    cout<<endl;
    //it=s.lower_bound(3);
    //it=s.upper_bound(7);
    // if(it==s.end())
    // cout<<"The element is the larger to the greater element";
    // else cout<<"The lower bound of 2 is="<<*it<<endl;

}