#include <bits/stdc++.h>
using namespace std;
int largest_subarray_sum(int *arr, int n){
    int current_sum = 0;
    int sum_so_far = INT_MIN;
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        sum_so_far = max(current_sum, sum_so_far);
        current_sum = (current_sum<0)?0:current_sum;
    }
    return sum_so_far;
}
int max_sum_rect(int** arr, int n, int m){
    int ans = INT_MIN;
    for(int l=0;l<m-1;l++){
        int* sum = new int[n];
        for(int i=0;i<n;i++) sum[i] = 0;
        for(int r=l;r<m;r++){
            for(int i=0;i<n;i++) sum[i] += arr[i][r];
            ans = max(largest_subarray_sum(sum, n), ans);
        }
    }
    return ans;
}
int main(){
    int n, m;
    cin >> n >> m;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
        for(int j=0;j<m;j++) cin >> arr[i][j];
    }
    cout << max_sum_rect(arr, n, m);
    for(int i=0;i<n;i++) delete[] arr[i];
    delete[] arr;
    return 0;
}
