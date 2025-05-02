#include<iostream>
#include<math.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long k;
        cin>>k;
        cout<<k*k;
    }
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        uint64_t b, c, d;
        cin >> b >> c >> d;

        
        uint64_t a = (b & c) ^ d; 
        
        if (((a | b) - (a & c)) == d && a <= (1ULL << 61)) {
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
