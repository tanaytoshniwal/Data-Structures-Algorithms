#include<bits/stdc++.h>

using namespace std;
int main() {
    int n, m, i;
    cin >> n >> m;
    long int a[n];
    for (i = 0;i < n;i++) {
        cin >> a[i];
    }
    long int max = *max_element(a, a + n);
    long int x = a[0], cnt = 0, p = 10 ^ 12;
    i = 1;
    while (cnt < n - m) {
        if (x + a[i] < max) {
            x += a[i];
            cnt++;
            i++;
        }
        else
        {
            if (x + a[i] < p)
                p = x + a[i];
            x = a[i];
            i++;
        }

    }
    cout << p;
}