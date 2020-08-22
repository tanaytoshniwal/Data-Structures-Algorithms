#include <bits/stdc++.h>
using namespace std;
string compress(string str){
    int len = str.length();
    if(len<3) return str;
    string res = "";
    int count = 1;
    for(int i=0;i<len-1;i++){
        if(str[i] != str[i+1]){
            res += str[i] + to_string(count);
            count = 1;
        }
        else count++;
    }
    res += str[len-1] + to_string(count);
    return (res.length()<len)?res:str;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << compress(s);
    return 0;
}