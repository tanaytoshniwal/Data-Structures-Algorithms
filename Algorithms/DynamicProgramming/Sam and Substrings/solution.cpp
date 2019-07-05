#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int substrings(string n) {
    long long sum = n[0]-'0', last = n[0]-'0';
    for(int i=1;i<n.length();i++){
        last = (last*10) + (n[i]-'0')*(i+1);
        last = last%mod;
        sum = (sum+last)%mod;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
