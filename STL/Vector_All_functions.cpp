#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<int>rahim;
    rahim.push_back(70);
    rahim.push_back(2);
    rahim.push_back(80);
    rahim.push_back(30);


//Iterator use for print the values
    // vector<int>::iterator it;
    // for(it=rahim.begin();it!=rahim.end();it++){
    //     cout<<*it<<" ";
    // }

   // cout<<rahim[5]<<endl;
    //cout<<rahim.at(0)<<endl; Another method to print the vector

    // //rahim.pop_back(); //Deleting the value of last index
    // rahim.erase(rahim.begin()+1); // Delete the specific index,begin()indicates the Zero index
    // rahim.erase( rahim.begin()+1,rahim.end()-1); //which index to which index we want to delete
//rahim.insert(rahim.begin()+4,1); //inserting a value which index i want
//rahim.insert(rahim.begin()+4,3,0); //inserting 0 of 3 times at the location of 4 index
    for(int i=0;i<rahim.size();i++){
        cout<<rahim[i]<<" ";
    }
    // sort(rahim.begin(),rahim.end());
    // cout<<endl<<"After Sorting:";
    //  for(int i=0;i<rahim.size();i++){
    //     cout<<rahim[i]<<" ";
    // }
//  reverse(rahim.begin(),rahim.end());
//     cout<<endl<<"After Reversing:";
//      for(int i=0;i<rahim.size();i++){
//         cout<<rahim[i]<<" ";
//     }

    cout<<endl;
    cout<<"Front value : "<<  rahim.front()<<endl;
    cout<<"Back value : "<<rahim.back()<<endl;
    cout<<"Size of Vector = "<<rahim.size();
    rahim.clear();
    cout<<endl<<"Size : "<< rahim.size()<<endl;
    if(rahim.empty()) cout<<"Empty"<<endl;
    else cout<<"Not empty"<<endl;
}