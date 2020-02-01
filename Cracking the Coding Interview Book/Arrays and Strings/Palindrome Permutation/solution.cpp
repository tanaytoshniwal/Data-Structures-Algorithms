#include <bits/stdc++.h>
using namespace std;
bool isPalindromePermutation(string s){
    unordered_map<char, int> lookup;
    for(const auto &c: s){
        if(c == ' ') continue;
        if(lookup.find(c) != lookup.end()){
            lookup[c]++;
        }
        else lookup[c] = 1;
    }
    bool flag = true;
    for(const pair<char, int> &ele: lookup){
        if(ele.second%2 != 0 && flag){
            flag = false;
        }
        else if(ele.second%2 != 0){
            return false;
        }
    }
    return true;
}
bool isPalindromePermutation2(string s){
    int odd_count = 0;
    int lookup[128] = {0};
    for(const auto &c: s){
        if(c == ' ') continue;
        lookup[c]++;
        if(lookup[c]%2==1) odd_count++;
        else odd_count--;
    }
    return odd_count <= 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    cout << isPalindromePermutation(s) << endl;
    cout << isPalindromePermutation2(s) << endl;
    return 0;
}