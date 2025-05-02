//Multiset : Multiset almost similer as Set.Set contains only unique values but Multiset contains both values(unique and duplicate).

#include<bits/stdc++.h>
using namespace std;
int main(){
  
    multiset<int>ms;    //Multiset declation
    //multiset<int,greater<int>>ms;  //use for descending order showing
    //Multiset insertion
    ms.insert(20);
    ms.insert(20);
    ms.insert(30);
    ms.insert(30);
    ms.insert(40);
    ms.insert(50);
    ms.emplace(1);      //use for getting input
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(3);

    //to print the elements use auto iterator

    for(auto it:ms)
    cout<<it<<" ";
    cout<<endl;
    
    //Clear function 
    //  ms.clear(); //all elements deleted

    //checking Empty or Not  
    if(ms.empty())cout<<"Empty"<<endl; 
    else cout<<"Not Empty"<<endl;

    //erase function
    ms.erase(50);


    //iterator declaration for printing output
    multiset<int>::iterator it;
    for(it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //lower_bound function
    it=ms.lower_bound(20); //iterator already declared so don't need to again declaration
    if(it==ms.end())
    cout<<"The element is larger to the greater element"<<endl;
    else cout<<"The lower bound of 20 is :  "<<*it<<endl;

    //upper_bound function
     it=ms.upper_bound(20); //iterator already declared so don't need to again declaration
    if(it==ms.end())
    cout<<"The element is larger or equal to the greater element"<<endl;
    else cout<<"The upper bound of 20 is :  "<<*it<<endl;

    //Erease function using iterator
    it=ms.begin(); //points the Zero index
    advance(it,3); //iterator points the index 3
    ms.erase(it);  //erase the  value of it th index
    for(auto it:ms) cout<<it<<" ";
    cout<<endl;


    //find function
    it=ms.find(1);
    if(it!=ms.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    //count function
    cout<<ms.count(30)<<endl;

    //Size print 
    cout<<ms.size()<<endl;
    //max_size print
    cout<<ms.max_size()<<endl;

    //Swap function
    multiset<int>s1={1,1,1,2,2,2,3,3,3};
    multiset<int>s2={0,0,0,0,0};
    s1.swap(s2);
   for(auto it:s1)
   cout<<it<<" ";
   cout<<endl;

   //Equal '=' operator
   multiset<int>s3;
   s3=s2;
   for(auto it:s3)cout<<it<<" ";
   cout<<endl;
}