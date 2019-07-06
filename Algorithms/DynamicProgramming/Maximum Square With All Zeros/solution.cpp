#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
    return (a>b)?a:b;
}
int min(int a, int b){
    return (a<b)?a:b;
}
int min_three(int a, int b, int c){
    return min(a, min(b, c));
}
int findMaxSquareWithAllZeros(int** arr, int row, int col){
    int** dp = new int*[row];
    int res = -1;
    for(int i=0;i<row;i++){
        dp[i] = new int[col];
        for(int j=0;j<col;j++){
            dp[i][j] = ((i==0 || j==0) && arr[i][j]==0)?1:0;
            res = max(res, dp[i][j]);
        }
    }
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            dp[i][j] = (arr[i][j]==0)?min_three(dp[i-1][j], dp[i][j-1], dp[i-1][j-1])+1:0;
            res = max(res, dp[i][j]);
        }
    }
    return (res==0)?1:res;
}
int main(){
    int **arr,n,m,i,j;
    cin>>n>>m;
    arr=new int*[n];
    for(i=0;i<n;i++){
        arr[i]=new int[m];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout << findMaxSquareWithAllZeros(arr,n,m) << endl;
    delete arr;
    return 0;
}