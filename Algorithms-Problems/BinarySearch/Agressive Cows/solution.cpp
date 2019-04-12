#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll* arr, ll n, ll c, ll d){
    c--;
    for(int i=1;i<n;i++){
        if(c==0) break;
        if(arr[i]-arr[i-1] >= d && c>=0){
            c--;
        }
    }
    return (c==0)?d:-1;
}
ll binarySearch(ll* arr, ll n, ll c, ll l, ll r){
    if(l<r){
        ll mid = (l+r)/2;
        ll res = check(arr, n, c, mid);
        if(res != -1){
            return binarySearch(arr, n, c, mid+1, r);
        }
        else{
            return binarySearch(arr, n, c, l, mid-1);
        }
        return mid;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, c;
        cin >> n >> c;
        ll *arr = new ll[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr, arr+n);
        cout << binarySearch(arr, n, c, 0, arr[n-1]);
    }
}