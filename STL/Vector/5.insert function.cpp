

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(6);
    for(int i=0; i<6; i++)
    {
        cin>>v[i];

    }
    v.insert(v.begin()+2,7);
    v.insert(v.begin()+3,2,-9);

    for(int i=0; i<6; i++)
    {
        cout<<v[i]<<" ";

    }

    return 0;
}
