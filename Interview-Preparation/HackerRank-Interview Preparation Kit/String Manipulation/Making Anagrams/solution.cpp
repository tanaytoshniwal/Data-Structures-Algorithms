#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int count = 0;
    vector<int> arr(26, 0);
    for(char c : a) arr[c-'a']++;
    for(char c : b) arr[c-'a']--;
    for(int val : arr) count += abs(val);
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
