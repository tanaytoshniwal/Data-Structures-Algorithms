#include <bits/stdc++.h>
using namespace std;
int max_product_subarray(int* arr, int n){
    int cur_max = 1, cur_min = 1, prod_so_far = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            cur_max *= arr[i];
            cur_min = min(1, cur_min * arr[i]);
        }
        else if(arr[i] < 0){
            int temp = cur_max;
            cur_max = max(1, cur_min * arr[i]);
            cur_min = temp * arr[i];
        }
        else cur_min = cur_max = 1;
        prod_so_far = max(prod_so_far, cur_max);
    }
    return prod_so_far;
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
        cin >> arr[i];
    cout << max_product_subarray(arr, n) << endl;
    return 0;
}