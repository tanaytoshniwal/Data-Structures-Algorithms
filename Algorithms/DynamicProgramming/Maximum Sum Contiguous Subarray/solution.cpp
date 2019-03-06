#include <bits/stdc++.h>
#include <climits>
using namespace std;

int maxSubArray(int* arr, int size) {
    int current_sum = arr[0], sum_so_far = arr[0];
    for(int i=1;i<size;i++){
        current_sum = max(arr[i], current_sum + arr[i]);
        sum_so_far = max(current_sum, sum_so_far);
    }
    return sum_so_far;
}

int main(){
    int n;
    cin>>n;
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubArray(arr, n);
    return 0;
}