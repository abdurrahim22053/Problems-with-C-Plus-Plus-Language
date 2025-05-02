#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1= {1,2,3,4,5,6};
    vector<int>v2= {10,20,30,40,50,60};
//cout<<"Before swapping"<<endl;
    swap(v1,v2);
    for(int i=0; i<v1.size(); i++)
    {
        cout<<v1[i]<<" ";

    }
    cout<<endl;
    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";

    }


    return 0;
}
