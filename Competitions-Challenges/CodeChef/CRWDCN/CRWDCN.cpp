#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;
int main(){
    int t;
    cin >> t;
    while(t-->0){
        lld n, x, y, z;
        cin >> n >> x >> y >> z;
        lld lcm1 = (x*y)/__gcd(x, y);
        lld lcm2 = (lcm1*z)/__gcd(lcm1, z);
        n *= 24;
        cout << n/lcm2;
    }
    return 0;
}