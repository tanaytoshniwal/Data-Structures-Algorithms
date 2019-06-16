#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long k;
    cin >> n >> k;
    long* arr = new long[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long small = arr[0] + k, big = arr[n-1] - k;
    for(int i=1;i<n-1;i++){
        long add = arr[i] + k, sub = arr[i] - k;
        if(sub >= small || add <= big) continue;
        else{
            small = (big-sub <= add-small)?sub:small;
            big = (big-sub > add-small)?add:big;
        }
    }
    cout << min(big-small, arr[n-1]-arr[0]);
}