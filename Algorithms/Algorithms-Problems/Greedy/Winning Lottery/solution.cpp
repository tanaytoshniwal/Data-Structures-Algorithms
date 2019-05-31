#include<bits/stdc++.h>
using namespace std;
int main() {
    int s, d;
    cin >> s >> d;
    string res = "";
    s-=1;
    d-=1;
    while(d--){
        if(s>9){
            res += "9";
            s -= 9;
        }
        else if(s>0){
            res += (char)(s+48);
            s=0;
        }
        else{
            res += "0";
        }
    }
    res += "1";
    reverse(res.begin(), res.end());
    cout << res;
}