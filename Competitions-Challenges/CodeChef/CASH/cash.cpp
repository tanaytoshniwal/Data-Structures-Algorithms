#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t-->0){
        int n, k;
        ll coins = 0;
        cin >> n >> k;
        ll* arr = new ll[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            int rem = arr[i]%k;
            if(rem == 0) continue;
            int offset = k-rem;
            if(coins >= offset){
                coins -= offset;
                arr[i] += offset;
            }
            else {
                arr[i] -= rem;
                coins += rem;
            }
        }
        cout << coins << endl;
    }
    return 0;
}