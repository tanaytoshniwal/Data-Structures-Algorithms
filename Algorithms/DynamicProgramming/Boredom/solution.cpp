#include <bits/stdc++.h>
using namespace std;
int n;
vector<int>A;
int solve(int n,vector<int>A){
    vector<int> freq(1001, 0);
    for(auto val: A) freq[val]++;
    int max_sum = 0;
    vector<int> dp(1001);
    dp[0] = 0;
    dp[1] = 1*freq[1];
    for(int i=2;i<1001;i++){
        dp[i] = max(dp[i-1], i*freq[i] + dp[i-2]);
    }
    return dp[1000];
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		A.push_back(x);
	}
	cout<<solve(n,A)<<endl;
}