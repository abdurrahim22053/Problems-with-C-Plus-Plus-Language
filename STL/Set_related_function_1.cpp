#include<bits/stdc++.h>
using namespace std;
int main (){
    set<int>ra; //
    ra.insert(10);
    ra.insert(20);
    ra.insert(30);
    ra.insert(40);
    ra.insert(40);
    ra.insert(30);
  // ra.erase(10); //which value we want to delete
set<int>::iterator it;
// for(auto it:ra) //Auto iterator using for printing the set values
// cout<<it<<" ";
// it=ra.begin();
// advance(it,2); //point the value of index 2. thats mean index 2 values will be deleted
// ra.erase(it);
// it=ra.find(20);   //Finding the value from a set
// if(it!=ra.end()) cout<<"Value Found"<<endl;
// else cout<<"Value not Found"<<endl;
for(it=ra.begin();it!=ra.end();it++){
    cout<<*it<<" "; // iterator works as a pointer
}
cout<<endl;
//ra.clear(); // clear function for deleting all the values
if(ra.empty()) cout<<"Empty"<<endl;  //check the set is empty or not
else cout<<"Not Empty"<<endl;
    cout<<ra.size()<<endl; // Size of the set
    cout<< ra.max_size()<<endl; //maximum size of a set
   // cout<<ra.count(60)<<endl; //counting the value.but the value of count will be 0 or 1 because set contains the unique elements

}