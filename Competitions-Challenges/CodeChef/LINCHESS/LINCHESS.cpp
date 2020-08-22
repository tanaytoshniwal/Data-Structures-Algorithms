#include <bits/stdc++.h>
using namespace std;
typedef long long int lld;

#define iambatman                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

int main() {
    iambatman int testcases;
    scanf("%d", &testcases);
    while (testcases--) {
        int n;
        lld k, res = -1, min_val = LONG_LONG_MAX;
        scanf("%d %lld", &n, &k);
        lld *arr = new lld[k];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
            if (arr[i] == k) {
                res = arr[i];
                break;
            }
            if (arr[i] > k) continue;
            if (k % arr[i] == 0) {
                if ((k / arr[i]) < min_val) {
                    res = arr[i];
                    min_val = (k / arr[i]);
                }
            }
        }
        delete[] arr;
        cout << res << "\n";
    }
    return 0;
}