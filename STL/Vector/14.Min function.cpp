
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v= {4,5,9,0,1,2,45,67,89,-98,43};
    cout<<*min_element(v.begin(),v.end())<<endl;

    return 0;
}
