#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l;
    cin >> n >> k >> l;
    int *arr = new int[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    int min_cost = INT_MAX;
    for(int i=arr[0];i<=arr[n-1];i++){
        int inc = 0, dec = 0;
        for(int j=0;j<n;j++){
            if(i>arr[j]) inc+=i-arr[j];
            else dec+=arr[j]-i;
        }
        if(inc>=dec){
            int cost = (dec*k) + ((inc-dec)*l);
            if(cost < min_cost) min_cost = cost;
        }
    }
    cout << min_cost << endl;
    return 0;
}