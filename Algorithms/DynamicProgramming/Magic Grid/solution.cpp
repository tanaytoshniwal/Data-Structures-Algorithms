#include <bits/stdc++.h>
using namespace std;
int calculate(int** arr, int si, int sj, int ei, int ej, int** dp){
    if(si == ei && sj == ej) return 1;
    if(dp[si][sj] > -1) return dp[si][sj];
    int a = (si<ei)?calculate(arr, si+1, sj, ei, ej, dp)-arr[si+1][sj]:INT_MAX;
    int b = (sj<ej)?calculate(arr, si, sj+1, ei, ej, dp)-arr[si][sj+1]:INT_MAX;
    int res = min(a, b);
    if(res<1) res = 1;
    dp[si][sj] = res;
    return dp[si][sj];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int **arr = new int*[n];
        int **dp = new int*[n];
        for(int i=0;i<n;i++){
            arr[i] = new int[m];
            dp[i] = new int[m];
            for(int j=0;j<m;j++){
                cin >> arr[i][j];
                dp[i][j] = -1;
            }
        }
        cout << calculate(arr, 0, 0, n-1, m-1, dp) << endl;
        for(int i=0;i<n;i++){
            delete[] arr[i];
            delete[] dp[i];
        }
        delete[] arr;
        delete[] dp;
    }
    return 0;
}
