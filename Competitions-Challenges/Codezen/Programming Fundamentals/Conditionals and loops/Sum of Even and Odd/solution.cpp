#include<bits/stdc++.h>
using namespace std;
void solve(int num){
    int even = 0, odd = 0;
    while(num > 0){
        int t = num%10;
        if(t%2==0) even+=t;
        else odd+=t;
        num /=10;
    }
    cout << even << " " << odd;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}
