#include <bits/stdc++.h>
using namespace std;

int getMinStepsMemoizationHelper(int n, int*& memo) {
    if(n == 1) {
        return 0;
    }
    if(memo[n] != -1) return memo[n];
    int res = 1 + getMinStepsMemoizationHelper(n - 1, memo);
    if(n % 2 == 0) res = min(res, 1 + getMinStepsMemoizationHelper(n / 2, memo));
    if(n % 3 == 0) res = min(res, 1 + getMinStepsMemoizationHelper(n / 3, memo));
    memo[n] = res;
    return res;
}

int getMinStepsMemoization(int n) {
    int* memo = new int[n+1];
    memset(memo, -1, sizeof(memo[0]) * (n + 1));
    int res = getMinStepsMemoizationHelper(n, memo);
    delete[] memo;
    return res;
}

int getMinStepsBottomUp(int n) {
    int* dp = new int[n + 1];
    dp[0] = dp[1] = 0;
    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + 1;
        if(i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
        if(i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
    }
    int res = dp[n];
    delete[] dp;
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << getMinStepsMemoization(n) << endl;
    cout << getMinStepsBottomUp(n) << endl;
    return 0;
}