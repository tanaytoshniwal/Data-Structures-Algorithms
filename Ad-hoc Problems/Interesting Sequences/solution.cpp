#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, l;
    cin >> n >> k >> l;
    int* arr = new int[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr, arr+n);
    int low = arr[0];
    int high = arr[n-1];
    int mincost = INT_MAX;
    for(int pivot = low;pivot<=high;pivot++){
        int inc = 0, dec = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<pivot) inc += pivot - arr[i];
            else dec += arr[i] - pivot;
        }
        if(inc >= dec){
            int cost = (dec*k) + ((inc-dec)*l);
            if(cost < mincost) mincost = cost;
        }
    }
    cout << mincost << endl;
    delete[] arr;
    return 0;
}