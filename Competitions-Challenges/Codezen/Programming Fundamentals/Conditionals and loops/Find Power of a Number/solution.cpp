#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, m;
    cin >> n >> m;
    long long ans = 1;
    while(m--) ans *= n;
    cout << ans;
}
