#include <bits/stdc++.h>
using namespace std;

void printPalindrome(string s){
    int n = s.length();
    map<char, vector<int>> indices;
    for(int i=0;i<n;i++){
        indices[s[i]].push_back(i);
    }
    bool flag = false;
    for(map<char, vector<int>>::iterator itr = indices.begin();itr!=indices.end();itr++){
        if(itr->second.size()%2 == 1 && !flag) flag = true;
        else if(itr->second.size()%2==1 && flag){
            cout << "-1";
            return;
        }
    }
    
    int *ans = new int[n];
    int ind = 0;
    for(int i=0;i<26;i++){
        char c = (char) i+97;
        for(int j=0;j<indices[c].size();j+=2){
            if(indices[c].size()-j == 1){
                ans[n/2] = indices[c][j];
                continue;
            }
            ans[ind] = indices[c][j];
            ans[n-ind-1] = indices[c][j+1];
            ind++;
        }
    }
    for(int i=0;i<n;i++){
        cout << ans[i]+1 << " ";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        printPalindrome(str);
        cout << endl;
    }
    return 0;
}