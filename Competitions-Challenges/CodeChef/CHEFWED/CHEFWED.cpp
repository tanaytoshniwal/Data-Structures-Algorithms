#include <bits/stdc++.h>
using namespace std;

#define iambatman                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main() {
    iambatman int testcases;
    cin >> testcases;
    while (testcases--) {
        int k, g, dps = 100, ans = INT_MAX;
        cin >> g >> k;
        int *arr = new int[g + 1];
        int dp[101][1001] = {0};
        int **arr2 = new int*[g + 1];

        unordered_map<int, int> lkp;

        for (int i = 0; i < g; i++) cin >> arr[i];

        for (int i = 0; i < g; i++) {
            arr2[i] = new int[g + 1];
            for (int j = 0; j < g; j++)
                arr2[i][j] = 0;
        }
        for (int i = 0; i < g; i++) {
            lkp.clear();
            for (int j = i; j < g; j++) {
                arr2[i][j] = (j == 0) ? 0 : arr2[i][j - 1];
                if (lkp.count(arr[j])) {
                    if (lkp[arr[j]] == 1)
                        arr2[i][j]++;
                    arr2[i][j]++;
                }
                lkp[arr[j]]++;
            }
        }
        for (int i = 0; i <= dps; i++) {
            for (int j = 0; j <= dps; j++)
                dp[i][j] = 0;
        }
        for (int i = 0; i < g + 1; i++)
            dp[1][i] = arr2[0][i - 1];
        for (int i = 2; i <= dps; i++)
            dp[i][1] = 0;
        for (int i = 2; i <= dps; i++) {
            for (int j = 2; j <= g; j++) {
                int temp = INT_MAX;
                for (int p = 1; p < j; p++) {
                    temp = min(temp, dp[i - 1][p] + arr2[p][j - 1]);
                }
                dp[i][j] = temp;
            }
        }
        for (dps = 1; dps <= 100; dps++)
            ans = min(dps * k + dp[dps][g], ans);
        
        delete[] arr;
        for (int i = 0; i < g; i++) {
            delete[] arr2[i];
        }
        delete[] arr2;
        cout << ans << "\n";
    }
    return 0;
}