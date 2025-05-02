

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0; i<6; i++)
    {
        cin>>v[i];

    }
    reverse(v.begin(),v.end());
    for(int i=0; i<6; i++)
    {
        cout<<v[i]<<" ";

    }

    return 0;
}
