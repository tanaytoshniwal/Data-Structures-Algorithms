#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll compute(ll* arr, int n, ll diff){
    int i = 0, j = 1;
    ll ans = 0;
    while(j<n){
        if(arr[j]-arr[i]>=diff){
            ans+=n-j;
            i++;
        }
        else j++;
    }
    return ans;
}
int main(){
    int n;
    ll k;
    cin >> n >> k;
    ll* arr = new ll[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    cout << compute(arr, n, k);
    return 0;
}