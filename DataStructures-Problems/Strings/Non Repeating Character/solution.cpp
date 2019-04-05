#include <bits/stdc++.h>
using namespace std;
char non_repeating_char(string s){
    vector<int> freq(26, 0);
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;i<s.length();i++)
        if(freq[s[i]-'a'] == 1)
            return s[i];
    return s[0];
}
int main(){
    string s;
    cin >> s;
    cout << non_repeating_char(s);
    return 0;
}