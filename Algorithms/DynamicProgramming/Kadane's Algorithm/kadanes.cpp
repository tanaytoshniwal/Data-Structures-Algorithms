#include <bits/stdc++.h>
#include <climits>
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

int main(){
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    cout << largest_subarray_sum(arr, n);
    delete [] arr;
    return 0;
}