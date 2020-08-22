#include <bits/stdc++.h>
using namespace std;
bool isSubstr(string s1, string s2){
    return s1.find(s2) != string::npos;
}
bool isRotation(string s1, string s2){
    s1 += s1;
    return isSubstr(s1, s2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    cout << isRotation(s1, s2);
    return 0;
}