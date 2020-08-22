#include <bits/stdc++.h>
using namespace std;

int getSplitCount(string s) {
    int left[26] = {0}, right[26] = {0};
    int n = s.length(), ans = 0;
    int leftUniqueCount = 0, rightUniqueCount = 0;
    for(int i=0;i<n;i++) {
        int ind = s[i] - 'a';
        if(right[ind] == 0) rightUniqueCount++;
        right[ind]++;
    }
    for(int i=0;i<n;i++) {
        int ind = s[i] - 'a';
        right[ind]--;
        if(right[ind] == 0) rightUniqueCount--;
        if(left[ind] == 0) leftUniqueCount++;
        left[ind]++;
        if(leftUniqueCount == rightUniqueCount) ans++;
    }
    return ans;
}

int main() {
    string s;
    cin >> s;
    cout << getSplitCount(s);
    return 0;
}