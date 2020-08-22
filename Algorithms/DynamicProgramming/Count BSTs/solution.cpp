#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int countBST(int* dp, int n){
    if(n==0 || n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    long sum = 0;
    for(int k=1;k<=n;k++){
        sum = (sum+(countBST(dp, k-1) * countBST(dp, n-k))%mod)%mod;
    }
    dp[n] = sum%mod;
    return dp[n];
}
int main(){
    int n ;
	cin>>n;
    int* dp = new int[n+1];
    for(int i=0;i<=n;i++) dp[i] = -1;
    dp[0] = dp[1] = 1;
	cout<<countBST(n);
	return 0;
}