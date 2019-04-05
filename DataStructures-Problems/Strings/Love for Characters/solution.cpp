#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> freq(3,0);
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a') freq[0]++;
        if(s[i] == 's') freq[1]++;
        if(s[i] == 'p') freq[2]++;
    }
    for(auto a:freq){
        cout << a << " ";
    }
	return 0;
}
