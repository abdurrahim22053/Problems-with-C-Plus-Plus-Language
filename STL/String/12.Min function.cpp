
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<*min_element(s.begin(),s.end())<<endl;
    return 0;
}
