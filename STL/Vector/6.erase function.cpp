

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0; i<6; i++)
    {
        cin>>v[i];

    }

    for(int i=0; i<6; i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
        v.erase(v.begin(),v.end());
        cout<<v.size()<<endl;

    return 0;
}
