#include <bits/stdc++.h>
using namespace std;

int maxPositiveSubArray(int* arr, int size) {
    int cur = arr[0], sum_so_far = arr[0];
    for(int i=1;i<size;i++){
        cur = max(0, cur+arr[i]);
        sum_so_far = max(cur, sum_so_far);
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
    cout<<maxPositiveSubArray(arr, n);
    return 0;
}