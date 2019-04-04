#include <bits/stdc++.h>
using namespace std;
int* compute(int* arr, int n){
    int *res = new int[n];
    int prod_so_far = res[0] = 1;
    for(int i=1;i<n;i++){
        res[i] = arr[i-1] * prod_so_far;
        prod_so_far = res[i];
    }
    prod_so_far = arr[n-1];
    for(int i=n-2;i>=0;i--){
        res[i] = res[i] * prod_so_far;
        prod_so_far *= arr[i];
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        int *prod = compute(arr, n);
        for(int i=0;i<n;i++){
            cout << prod[i] << " ";
        }
        cout << endl;
    }
    return 0;
}