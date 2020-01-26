#include <bits/stdc++.h>
using namespace std;
bool isUnique1(string s){
    unordered_set<char> st;
    for(const auto &c: s){
        st.insert(c);
    }
    return st.size() == s.length();
}
bool isUnique2(string s, int l){
    sort(s.begin(), s.end());
    for(int i=0;i<l-1;i++){
        if(s[i] == s[i+1]) return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << "Solution 1: " << isUnique1(s) << endl;
    cout << "Solution 2: " << isUnique2(s, s.length()) << endl;
    return 0;
}