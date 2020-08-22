#include <bits/stdc++.h>
using namespace std;
bool checkPerm1(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    int arr[128] = {0};
    for(const auto &c: s1){
        arr[c]++;
    }
    for(const auto &c: s2){
        arr[c]--;
        if(arr[c] < 0) return false;
    }
    return true;
}
bool checkPerm2(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    unordered_map<char, int> lookup;
    for(const auto &c: s1){
        if(lookup.find(c) != lookup.end()) lookup[c]++;
        else lookup[c] = 1;
    }
    for(const auto &c: s2){
        if(lookup.find(c) != lookup.end()) {
            lookup[c]--;
            if(lookup[c] == 0) lookup.erase(c);
        }
        else return false;
    }
    return (lookup.size() == 0)?true:false;
}
bool checkPerm3(string s1, string s2){
    if(s1.length() != s2.length()) return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1.compare(s2) == 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout << "Result: " << checkPerm1(s1, s2) << endl;
    cout << "Result: " << checkPerm2(s1, s2) << endl;
    cout << "Result: " << checkPerm3(s1, s2) << endl;
    return 0;
}