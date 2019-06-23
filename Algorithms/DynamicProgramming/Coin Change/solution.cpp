#include <bits/stdc++.h>
using namespace std;
int coin_change(int denominations[], int numDenominations, int value, int** dp){
    if(numDenominations == 0 || value < 0) return 0;
    if(value == 0) return 1;
    if(dp[numDenominations][value]>-1) return dp[numDenominations][value];
    dp[numDenominations][value] = coin_change(denominations, numDenominations, value-denominations[0], dp)
        + coin_change(denominations+1, numDenominations-1, value, dp);
    return dp[numDenominations][value];
}
int countWaysToMakeChange(int denominations[], int numDenominations, int value){
    int** dp = new int*[numDenominations+1];
    for(int i=0;i<=numDenominations;i++){
        dp[i] = new int[value+1];
        for(int j=0;j<=value;j++)
            dp[i][j] = -1;
    }
    return coin_change(denominations, numDenominations, value, dp);
}
int main(){
    int numDenominations;
    cin >> numDenominations;
    int* denominations = new int[numDenominations];
    for(int i = 0; i < numDenominations; i++){
        cin >> denominations[i];
    }
    int value;
    cin >> value;
    cout << countWaysToMakeChange(denominations, numDenominations, value);
    return 0;
}