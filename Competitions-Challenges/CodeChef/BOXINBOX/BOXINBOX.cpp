#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int **arr = new int*[n];
    vector<int> min_val(n/2, INT_MAX);
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            int layer = min(min(n-1-i, n-1-j), min(i-0, j-0));
            min_val[layer] = min(min_val[layer], arr[i][j]);
        }
    }
    int res = (n%2==1)?arr[n/2][n/2]:0;
    for(int i=0;i<n/2;i++){
        res+=min_val[i];
    }
    cout << res;
    return 0;
}