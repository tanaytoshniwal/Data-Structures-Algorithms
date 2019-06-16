#include <bits/stdc++.h>
using namespace std;
int balancedBTs(int h) {
    if(h==0 || h==1) return 1;
    long long x = balancedBTs(h-1), y = balancedBTs(h-2);
    return ((x*x)+(2*x*y)) % 1000000007;
}
int main() {
    int h;
    cin >> h;
    int ans = balancedBTs(h);
    cout << ans << endl;
}