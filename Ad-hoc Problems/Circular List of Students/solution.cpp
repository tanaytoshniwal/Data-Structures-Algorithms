#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans = ((a+b) < 12)?(a+b):(a+b)%12;
        cout << ans << endl;
    }
    return 0;
}