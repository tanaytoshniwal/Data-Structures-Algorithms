#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    long groups = (s[0] == '0')?1:0;
    for(int i=1;i<n;i++){
        if(s[i-1]=='1' && s[i] == '0') groups++;
    }
    cout << min(x,y)*(groups-1) + y;
	return 0;
}
