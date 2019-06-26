#include <bits/stdc++.h>
using namespace std;
int min_cost(int** arr, int n, int m){
    int** dp = new int*[n];
    for(int i=0;i<n;i++) dp[i] = new int[m];
    dp[n-1][m-1] = arr[n-1][m-1];
    for(int i=n-2;i>=0;i--) dp[i][m-1] = dp[i+1][m-1] + arr[i][m-1];
    for(int j=m-2;j>=0;j--) dp[n-1][j] = dp[n-1][j+1] + arr[n-1][j];
    for(int i=n-2;i>=0;i--)
        for(int j=m-2;j>=0;j--)
            dp[i][j] = arr[i][j] + min(dp[i+1][j], min(dp[i+1][j+1], dp[i][j+1]));
    int ans = dp[0][0];
    for(int i=0;i<n;i++) delete[] dp[i];
    delete[] dp;
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
    cout << min_cost(arr, n, m);
    delete[] arr;
    return 0;
}