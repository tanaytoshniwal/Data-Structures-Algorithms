#include <bits/stdc++.h>
using namespace std;
int round(int num){
    if(num < 38) return num;
    int diff = (num%10 >= 5)?10-(num%10):5-(num%10);
    if(diff >= 3) return num;
    return num + diff;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        cout << round(num) << "\n";
    }
    return 0;
}