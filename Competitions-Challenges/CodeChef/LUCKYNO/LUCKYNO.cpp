#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t-->0){
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int n = str.length(); bool flag = true;
        for(int i=0;i<n-1;i++){
            if((str[i+1]-'0')-(str[i]-'0') > 2){
                cout << "NO\n";flag = false;
                break;
            }
        }
        if(flag) cout << "YES\n";
    }
    return 0;
}