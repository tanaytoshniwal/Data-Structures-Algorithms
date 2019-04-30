#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binarySearch(ll* arr, int n, int c, ll l, ll r){
    ll ans = -1;
    while(l<=r){
        ll mid = (l+r)/2;
        ll count = 1;
        int last = 0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[last]>=mid){
                count++;
                last = i;
            }
            if(c == count) break;
        }
        if(c == count){
            l = mid+1;
            ans = mid;
        }
        else {
            r = mid-1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        ll *arr = new ll[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        sort(arr, arr+n);
        cout << binarySearch(arr, n, c, 0, arr[n-1]-arr[0]) << endl;
    }
    return 0;
}