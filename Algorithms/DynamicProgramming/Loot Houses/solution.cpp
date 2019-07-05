#include <bits/stdc++.h>
using namespace std;
int getMaxMoney(int arr[], int n){
    int *dp = new int[n];
    dp[0] = arr[0];
    dp[1] = (arr[0]>arr[1])?arr[0]:arr[1];
    for(int i=2;i<n;i++){
        dp[i] = (dp[i-2]+arr[i] > dp[i-1])?dp[i-2]+arr[i]:dp[i-1];
    }
    int ans = dp[n-1];
    delete[] dp;
    return ans;
}

int main(){
    int n;
    cin >> n;
    int arr[10000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMaxMoney(arr, n);
}

