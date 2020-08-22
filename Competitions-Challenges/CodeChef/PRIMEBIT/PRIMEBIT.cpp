#include <bits/stdc++.h>
using namespace std;
typedef long int lld;
lld bit(lld n){
    lld sum = 0;
    for(int i = 31;i >= 0;i--){ 
        int k = n >> i;
        if (k & 1) sum+=i;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t-->0){
        lld n;
        cin >> n;
        // int power, sum = 0;
        // power = log2(n);
        // while(power != 0){
        //     sum += power;
        //     n -= pow(2, power);
        //     power = log2(n);
        // }
        cout << bit(n) << "\n";
    }
    return 0;
}