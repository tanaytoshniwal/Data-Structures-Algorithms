#include <bits/stdc++.h>
using namespace std;

#define iambatman                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

int main() {
    iambatman int testcases;
    cin >> testcases;
    while (testcases--) {
        string inp, pat, p_end = "", p_start = "";
        cin >> inp >> pat;
        int n = inp.size(), m = pat.size();
        int arr[27] = {0}, copy[27];

        for (int i = 0; i < n; i++) arr[inp[i] - 'a']++;
        for (int i = 0; i < m; i++) arr[pat[i] - 'a']--;
        for (int i = 0; i < 26; i++) copy[i] = arr[i];
        // place start
        for (int i = 0; i < pat[0] - 'a'; i++) {
            while (copy[i] != 0) {
                p_start += (char)(i + 97);
                copy[i]--;
            }
        }
        p_start += pat; // append pattern
        for (int i = 0; i < 26; i++) {
            while (copy[i] != 0) {
                p_start += (char)(i + 97);
                copy[i]--;
            }
        }
        // place end
        for (int i = 0; i <= (pat[0] - 'a'); i++) {
            while (arr[i] > 0) {
                p_end += (char)(i + 97);
                arr[i]--;
            }
        }
        p_end += pat; // append pattern
        for (int i = 0; i < 26; i++) {
            while (arr[i] > 0) {
                p_end += (char)(i + 97);
                arr[i]--;
            }
        }
        cout << min(p_start, p_end) << "\n";
    }
}