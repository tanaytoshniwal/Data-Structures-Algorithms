#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll largest_subarray_sum(int* arr, int n, int m){
    ll total_sum = 0, max_suffix_sum = INT_MIN, max_prefix_sum = INT_MIN, cur_suffix_sum = 0, cur_prefix_sum = 0;
    ll current_sum = 0, sum_so_far = INT_MIN;
    for(int i=0;i<n;i++){
        total_sum += arr[i];
        current_sum += arr[i];
        sum_so_far = max(sum_so_far, current_sum);
        current_sum = (current_sum<0)?0:current_sum;
        cur_prefix_sum += arr[i];
        max_prefix_sum = max(max_prefix_sum, cur_prefix_sum);
        cur_suffix_sum += arr[n-i-1];
        max_suffix_sum = max(cur_suffix_sum, max_suffix_sum);
    }
    if(m==1) return sum_so_far;
    if(total_sum >= 0){
        return max(max_prefix_sum+max_suffix_sum+total_sum*(m-2), sum_so_far);
    }
    else{
        return max(max_prefix_sum+max_suffix_sum, sum_so_far);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int *arr = new int[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        cout << largest_subarray_sum(arr, n, m) << endl;
        delete[] arr;
    }
    return 0;
}