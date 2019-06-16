#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long int ll;
ll count_code(string num, int length){
    ll* output = new ll[5001];
    output[0] = 1;
    for(int i=1;i<length;i++){
        int t = (num[i-1]-'0')*10 + (num[i]-'0');
        if(num[i] != '0') output[i] = output[i-1];
        if(t>=10 && t<=26 && i>1) output[i] += output[i-2];
        else if(t>=10 && t<=26) output[i]++;
        output[i] = output[i] % mod;
    }
    return output[length-1];
}
int main()
{
    string num;
    while(1){
        cin >> num;
        if(num == "0") break;
        int n = num.length();
        cout << count_code(num, n) << endl;
    }
    return 0;
}
